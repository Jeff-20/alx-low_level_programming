#include <stdio.h>


/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of pointers of arrays of characters
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
