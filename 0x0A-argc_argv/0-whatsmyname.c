#include <stdio.h>

/**
 * main - Entry point
 * @argc: indicates number of arguments entered
 * @argv: array of pointers to arrays of characters
 * Return: Always 0
 */

int main(int argc, char *argv[])

{

int i = 0;

for (; i < argc; i++)

{

printf("%s\n", argv[i]);

}

return (0);

}
