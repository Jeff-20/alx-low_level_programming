#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* string_nconcat - a function that concatenates two strings
* @s1: string to be appended
* @s2: string to append from
* @n: maximum number of characters to be appended
* Return: pointer to newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;

s3 = malloc(sizeof(char) * (strlen(s1) + n + 1));

strcpy(s3, s1);

if (s3 == NULL)
return (NULL);

else if (n >= strlen(s2))
{
s3 = strcat(s3, s2);
}

else
{
s3 = strncat(s3, s2, n);
}

return (s3);
}
