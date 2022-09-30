#include "main.h"

/**
* _pow_recursion - gives the value of x raised to the power of y
* @x: the variable whose value is
* raised to a power
*@y: the value x is raised to
* Return: result of x raised to y
*/

int _pow_recursion(int x, int y)

{


if (y < 0)

return (-1);

if (y == 0)

return (1);

if (y == 1)

return (x);

return (x = x * _pow_recursion(x, y-1));

}

