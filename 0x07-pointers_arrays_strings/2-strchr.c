#include "main.h"

/**
* _strchr - locate character in a string
* @s: first input
* @c: second input
* Return: Always 0
*/

char *_strchr(char *s, char *c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
