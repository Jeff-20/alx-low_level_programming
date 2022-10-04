#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup - returns a pointer to a newly allocated space in
* memory which contains a copy of the string given as a parameter
*@str: string to be copied
*
* Return: a pointer to duplicated string or NULL if
* insufficient available
*/
char *_strdup(char *str)
{
char *new;
int size;
size = strlen(str);

new = malloc(sizeof(char) * (size));

if (str == NULL)
return (NULL);

if (new == NULL)
return (NULL);

while (str)
{
new = strdup(str);

return (new);
}
return (new);

}
