#include "main.h"
#include <string.h>

/**
* _strlen_recursion - prints the length of a string
* @s: input string
* Return: the length of the string
*/

int _strlen_recursion(char *s)

{


if (*s)
{

return (_strlen_recursion(s + 1) + 1);

}
return (0);
}
