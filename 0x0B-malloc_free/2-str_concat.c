#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* str_concat - a function that concatenates two strings
* @s1: string to be concatenated
* @s2: string to concatenate into s1
*
* Return: pointer to resulting concatenated string
*/

char *str_concat(char *s1, char *s2)
{
char *s3;
unsigned int size;

size = (strlen(s1) + strlen(s2));

s3 = malloc(sizeof(char) * (size + 1));

if (s3 == NULL)
{
return (NULL);
}
while (*s3)
{
s3 = strcat(s1, s2);
}
return (s3);
}
