#include <stdio.h>

/*constructor attribute*/

void before_main(void) __attribute__((constructor));

/**
 * before_main - function that prints a text
 * before main is executed
 *
 * Return: Nothing
 */

void before_main(void)
{
printf("You're beat! and yet, you must allow,\n");

printf("I bore my house upon my back!\n");
}
