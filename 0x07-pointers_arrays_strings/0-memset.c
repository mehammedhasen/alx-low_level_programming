#include "main.h"

/**
* _memset - fill memory
* @s: sstarting address of memory
* @b: desired value
* @n: bytes to be changed
* Return: Array of new value
*/

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
