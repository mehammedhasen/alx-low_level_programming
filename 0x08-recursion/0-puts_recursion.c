#include "main.h"

/**
* _puts_recursion - Entry point
* @s: first input
* Return: 0
*/

void _puts_recursion(char *s)
{
if (*s)
{
putchar(*s);
_puts_recursion(s + 1);
}
else
putchar('\n');
}
