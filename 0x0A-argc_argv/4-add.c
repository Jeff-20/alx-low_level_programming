#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector (values to be added)
 *
 * Return: Returns 0 on success and 1 on failure
 */
int main(int argc, char *argv[])
{

int n, sum = 0;

while (argc-- > 1)
{
int i = 0;
for (; argv[argc][i]; i++)
{
if (!(isdigit(argv[argc][i])))
{
printf("Error\n");
return (1);
}
}
n = atoi(argv[argc]);
sum += n;
}
printf("%d\n", sum);
return (0);
}
