#include "main.h"

/**
* _strlen_recursion - length of string function
* @s: srting
* Return: Length string
*/

void _strlen_recursion(char *s)
{
int leng = 0;
if (*s)
{
leng++;
leng += _strlen_recursion(s + 1);
}
return (leng);
}
