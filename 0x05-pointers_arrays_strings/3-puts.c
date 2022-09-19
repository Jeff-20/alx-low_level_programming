#include "main.h"

/**
 * _puts - writes a function that prints a string, followed
 * by a new line to standard output
 * @str: input string
 * Return: Nothing
 */
void _puts(char *str)
{
int i = 0;

for (; i <= 63; i++)
{
_putchar(str[i]);

}
_putchar('\n');
}
