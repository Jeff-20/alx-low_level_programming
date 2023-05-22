#include "main.h"

/**
 * _isalpha -checks for alphabetic character, either lowercase or uppercase
 * @c: An input character
 * Return: 1 if the character is a letter, lowercase or uppercase. Otherwise 0
 */
int _isalpha(int c)
{
char lower, upper;
int isletter = 0;

for (lower = 'a'; lower <= 'z'; lower++)
{
for (upper = 'A'; upper <= 'Z'; upper++)
{
if (c == lower || c == upper)
isletter = 1;
}
}
return (isletter);
}
