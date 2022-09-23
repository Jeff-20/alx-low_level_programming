#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: input string to encode
 * Return: encoded string
 */
char *leet(char *s)
{

int i = 0;
int z;

char str[10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
int nums[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};


while (s[i])

{
for (z = 0; z < 10; z++)

if (s[i] == str[z])

s[i] = nums[z];

i++;
}

return (s);
}
