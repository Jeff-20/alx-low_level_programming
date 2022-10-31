#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
* read_textfile - function that reads a text file
* and prints it to the POSIX standard output
* @filename: pointer to the file
* @letters: the number of letters that should be
* read and printed by the function
*
* Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, r, w;

char *buf;

if (filename == NULL)
return (0);

buf = malloc(sizeof(char) * letters);

if (buf == NULL)
return (0);

fd = open(filename, O_CREAT | O_RDONLY);

if (fd < 0)
return (0);

r = read(fd, buf, letters);

if (r < 0)
return (0);

close(fd);

fd = open(filename, O_WRONLY);

if (fd < 0)
return (0);

w = write(STDOUT_FILENO, buf, r);

if (w < 0)
return (0);

close(fd);

return (r);
}
