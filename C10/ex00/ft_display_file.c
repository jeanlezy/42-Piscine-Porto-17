#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
    char buffer[1024];
    int file;
    int reading;

    if(argc < 2)
    {
        write(2, "File name missing.\n", 19);
        return (0);
    }
    if(argc > 2)
    {
        write(2, "Too many arguments.\n", 20);
        return (0);
    }
    /* O_RDONLY - read only
        O_WRONLY - write only
        O_RDWR - read and write*/
    file = open(argv[1], O_RDONLY); 
    if(file == -1)
    {
        write(2, "Cannot read file.\n", 18);
        return (0);
    }
    
    // read(where is gonna read, temporaly stored, maximum bytes)
    reading = read(file, buffer, 1024);
    while(reading > 0)
    {
        //write down what just read - using reading because is the actual size
        write(1, buffer, reading);
        // read next part
        reading = read(file, buffer, 1024); 
    }
    
    close(file);
    return (0);
}