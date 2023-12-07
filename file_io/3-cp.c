#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void print_error(char *message, char *filename, int exit_code)
{
    dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
    exit(exit_code);
}

int open_file(char *filename, int flags, mode_t mode)
{
    int fd = open(filename, flags, mode);
    if (fd == -1) {
        print_error("Can't write to", filename, 99);
    }
    return (fd);
}

void copy_file(int fd_from, int fd_to)
{
    char buffer[BUFFER_SIZE];
    ssize_t read_bytes, write_bytes;

    while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        write_bytes = write(fd_to, buffer, read_bytes);
        if (write_bytes != read_bytes) {
            print_error("Can't write to", "destination file", 99);
        }
    }

    if (read_bytes == -1) {
        print_error("Can't read from", "source file", 98);
    }
}

int main(int argc, char *argv[])
{
    int fd_from, fd_to;

    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fd_from = open_file(argv[1], O_RDONLY, 0);
    fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

    copy_file(fd_from, fd_to);

    if (close(fd_from) == -1 || close(fd_to) == -1) 
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd descriptors\n");
        exit(100);
    }

    return 0;
}
