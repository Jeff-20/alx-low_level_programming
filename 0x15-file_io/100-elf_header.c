#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 on success, status code 98 on failure
 */
int main(int argc, char *argv[])
{
printf("argc:%d, argv:%p\n", argc, (void *)*argv);

return (1);
}
