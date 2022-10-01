#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of pointers of arrays of characters
 * Return: Always 0
 */

int main(int argc, char **argv)

{

int n1, n2, res;
int i;

for (i = 1; i < argc; i++)

{
n1 = atoi(argv[i]);
n2 = atoi(argv[i + 1]);
res = n1 * n2;

printf("%d\n", res);

return (0);

}


if (argc != 3)

{
printf("Error\n");

return (1);

}

return (0);

}
