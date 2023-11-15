#include "main.h"

/**
* _pow_recursion - return power multiplication
* @x: input 1
* @y: imput 2
* Return: result of x to power of y
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, (y - 1)));
}
