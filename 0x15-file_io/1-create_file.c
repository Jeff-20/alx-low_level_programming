#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
* create_file - function that creates a file
* @filename: pointer to the file filename
* @text_content: Null-terminated string to write
* to the file
*
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int fd, r, w;
unsigned int length;
char *buf;

length = strlen(text_content);

buf = malloc(sizeof(char) * length);

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

if (fd < 0)
return (-1);

r = read(fd, buf, length);

if (r < 0)
return (-1);

w = write(STDOUT_FILENO, text_content, r);

if (w < 0)
return (-1);

close(fd);

return (1);

}
