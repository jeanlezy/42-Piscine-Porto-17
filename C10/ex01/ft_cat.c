#include <unistd.h> // read and close
#include <fcntl.h> // open and O_RDONLY
#include <errno.h> // system func fail, store a number
#include <string.h>
#include <libgen.h> // basename - catch a complete path

#define BUFFER_SIZE 1024

int main(int argc, char **argv)
{
    int fd; 
    ssize_t bytes_read; // num of bytes read() (0, positive or  -1)
    char buffer[BUFFER_SIZE];
    char *prog_name = basename(argv[0]); //Extract just the program name from argv0
    int i = 1; //0 = program name

    if(argc < 2)
        return (0);
    
    while(i < argc)
    {
        // open file in read only
        fd = open(argv[i], 0); 
        if(fd == -1)
        {
            // print error message to stderr (fd 2), "program_name: filename: error_message"
            write(2, prog_name, strlen(prog_name));
            write(2, ": ", 2);
            write(2, argv[i], strlen(argv[i]));
            write(2, ": ", 2);
            write(2, strerror(errno), strlen(strerror(errno))); // convert errno int readable msg
            write(2, "\n", 1);
            i++;
            continue; 
        }
        //read the file in chunks and print immediately
        while((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
            write(1, buffer, bytes_read);
        
        close(fd);
        i++;
    }
    return (0);
}