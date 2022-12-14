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
int fd, w;
int length = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

if (fd < 0)
return (-1);

while (text_content && *(text_content + length))
length++;

w = write(STDOUT_FILENO, text_content, length);
close(fd);
if (w < 0)
return (-1);

return (1);

}
