#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
* append_text_to_file - function that appends text at the
* end of a file
* @filename: pointer to the file filename
* @text_content: Null-terminated string to add
* at the end of the file
*
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd, w;
int length = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_APPEND | O_RDWR);
if (fd < 0)
return (-1);
if (text_content == NULL)
{
close(fd);
return (1);
}

while (*text_content + length)
length++;

w = write(fd, text_content, length);
close(fd);
if (w < 0)
return (-1);

return (1);
}
