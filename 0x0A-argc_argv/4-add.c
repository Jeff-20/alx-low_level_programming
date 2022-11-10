#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

int sum = 0;
int i = 1;

if (argc < 1)
{

printf("0\n");
return (0);
}

if (argc > 1)
{

int n;
n = atoi(argv[i]);

for (n = 'a'; n <= 'z'; n++)
{

printf("Error\n");
return (1);
}

}

else
{

while (argc <= 3)
{

sum = atoi(argv[1])  + atoi(argv[2]);
printf("%d\n", sum);
return (sum);
}

while (argc > 3)
{
sum = atoi(argv[1]) + atoi(argv[2]) + atoi(argv[3]) + atoi(argv[4]) + atoi(argv[5]);
printf("%d\n", sum);
return (sum);
}
}

printf("%d\n", sum);

return (0);
}
