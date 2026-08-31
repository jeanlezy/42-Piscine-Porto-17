#include <unistd.h> // read and close
#include <fcntl.h> // open and O_RDONLY
#include <errno.h> // system func fail, store a number
#include <string.h>
#include <libgen.h> //basename
#include <stdlib.h>

int ft_atoi(char *str)
{
    int res = 0;
    int i = 0;

    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res);
}
int main(int argc, char **argv)
{
    char *prog_name = basename(argv[0]);

    // expect: prog, -c, N, file
    if(argc != 4 || strcmp(argv[1], "-c") != 0)
    {
        write(2, "usage: ft_tail -c N File\n", 26);
        return (1);
    }
    int n = ft_atoi(argv[2]);
    int fd = open(argv[3], 0);

    if(fd == -1)
    {
        write(2, prog_name, strlen(prog_name));
        write(2, ": ", 2);
        write(2, argv[3], strlen(argv[3]));
        write(2, ": ", 2);
        write(2, strerror(errno), strlen(strerror(errno)));
        write(2, "\n", 1);
        return (1);
    }

    if (n == 0)
    {
        close(fd);
        return (0);
    }
    // Allocate a circular buffer of size N to store the last N bytes of the file
    char *circular_buf = malloc(n);
    if(!circular_buf)
    {
        close(fd);
        return (1);
    }

    char c;                 // Single byte read from the file at a time
    long total_bytes = 0;   // Keep track of total bytes read
    int write_pos = 0;      // Current writing position in the circular buffer

    // Read the file byte by byte until the end
    while(read(fd, &c, 1) > 0)
    {
        circular_buf[write_pos] = c;
        write_pos = (write_pos + 1) % n; // Wrap around if the buffer is full
        total_bytes++;
    }

    // If the file is smaller than or equal to N, print from the beginning of the buffer
    if(total_bytes <= n)
        write(1, circular_buf, total_bytes);

    else
    {
        // If the file is larger than N, print from write_pos to the end, then wrap to the start
        write(1, circular_buf + write_pos, n - write_pos);
        write(1, circular_buf, write_pos);
    }
    free(circular_buf);
    close(fd);
    return (0);
}