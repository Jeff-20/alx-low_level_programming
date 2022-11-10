#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the minimum number of coins to make
* a change for an amount of money
* @argc: argument count
* @argv: argument vector
*
* Return: returns 1 if the number of arguments passed to the program
* is not 1, otherwise 0
*/

int main(int argc, char *argv[])
{
int cents, coins = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
cents = atoi(argv[1]);
if (cents < 0)
{
printf("%d\n", 0);
return (0);
}
if (cents % 25 >= 0)
{
coins += cents / 25;
cents %= 25;
}
if (cents % 10 >= 0)
{
coins += cents / 10;
cents %= 10;
}
if (cents % 5 >= 0)
{
coins += cents / 5;
cents %= 5;
}
if (cents % 2 >= 0)
{
coins += cents / 2;
cents %= 2;
}
if (cents % 1 >= 0)
coins += cents;

printf("%d\n", coins);
}
return (0);
}
