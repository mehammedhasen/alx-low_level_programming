#include "main.h"
/**
 * _abs - prints the sign of a number
 * @n: the number will be checked
 * Return: Absolute value of number
 */
int _abs(int n)
{
if (n < 0)
{int abs_val;
abs_val = n * -1;
return (abs_val);
}
return (n);
}
