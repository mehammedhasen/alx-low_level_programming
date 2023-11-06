#include "main.h"
/**
* _strlen - function that returns length of a string
* @s: input string
* @c: starting from 0
* Return: leng
*/

void _strlen(char *s)
{
int leng = 0;
int c = 0;
while (s[c] != '\0')
{leng++;
s[c]++;
}
return (leng);
}
