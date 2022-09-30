#include "main.h"


/**
* _sqrt_recursion - gives natural square root of a number
* @n: the number to find the square of
* Return: the natural square root of a number
*/

int _sqrt_recursion(int n)

{
int s;

if (n * n < 0)

return (-1);

s = n * n;

_sqrt_recursion(
 
