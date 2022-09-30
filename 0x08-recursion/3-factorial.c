#include "main.h"


/**
* factorial - gives the factorial of a given number
* @n: a number whose factorial is to be found
*
* Return: factorial of a number
*/

int factorial(int n)

{

if (n < 0)

return (-1);

if (n <= 1)

return (1);

n = n * (factorial(n - 1));

return (n);

}

