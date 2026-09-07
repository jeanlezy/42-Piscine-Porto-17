#include <unistd.h>
#include <fcntl.h> 
#include <errno.h> 
#include <string.h>
#include <libgen.h>
#include <stdlib.h>

#define LINE_SIZE 16

/* format of hexdump -C
00000000  48 65 6c 6c 6f 2c 20 77   6f 72 6c 64 21 0a    |hello|
offset: 8 hex digits with zeros at left
16 hex bytes in two blocks of 8, extra space between.
ASCII: between |...| or .   
*/

// convert a single 4 bit value(0 - 15) into hex (0-9, 'a' - 'f') 
char hex_char(int value)
{
    if(value < 10)
        return (value + '0');    // map 0-9 to ASCII '0'-'9'
    return ('a' + (value - 10)); // map 10-15 to ASCII 'a'-'f'
}

void write_hex(int fd_out, unsigned int value, int width)
{
    char *tmp = malloc(width); // temp buff to hold digits before print
    int i = width - 1;

    while(i >= 0)
    {
        tmp[i] = hex_char(value % 16); // get the lowest hex digit
        value = value / 16;            // shift right by one hex digit
        i--;
    }
    write(fd_out, tmp, width);
    free(tmp);
}
int main (int argc, char **argv)
{
    char *prog_name = basename(argv[0]);

    // assume the last argument is the filename to open
    char *filename = argv[argc - 1]; 
    int fd = open(filename, 0);

    if(fd == -1)
    {
        write(2, prog_name, strlen(prog_name));
        write(2, ": ", 2);
        write(2, filename, strlen(filename));
        write(2, ": ", 2);
        write(2, strerror(errno), strlen(strerror(errno)));
        write(2, "\n", 1);
        return (1);
    }

    unsigned char buffer[LINE_SIZE];
    ssize_t bytes_read;
    unsigned int offset = 0; // tunning byte position in the file

    // read the file block by block (LINE_SIZE bytes at a time)
    while((bytes_read = read(fd, buffer, LINE_SIZE)) > 0)
    {
        // print 8-hex-digit offset (zero-padded, e.g., "00000000")
        write_hex(1, offset, 8);
        write(1, "  ", 2); // 2 spaces after offset, matching standard hex viewer layout

        // Print the hexadecimal representation of the bytes
        int i = 0;
        while(i < LINE_SIZE)
        {
            if(i < bytes_read)
            {
                write_hex(1, buffer[i], 2);
                write(1, " ", 1);
            }
            else
                write(1, "   ", 3); // Padding if the line is incomplete
            
            if(i == 7) // Add an extra space in the middle of the 16 bytes for readability
                write(1, " ", 1);
            i++;
        }
        write(1, " |", 2);
        
        // Print the ASCII representation of the bytes
        i = 0;
        while(i < bytes_read)
        {
            if(buffer[i] >= 32 && buffer[i] <= 126)
                write(1, &buffer[i], 1);
            else
                write(1, ".", 1);
            i++;
        }
        write(1, "|\n", 2);

        // Update the file offset by the number of bytes read
        offset += bytes_read;

        write_hex(1, offset, 8);
        write(1, "\n", 1);
    }
    close(fd);
    return (0);
}