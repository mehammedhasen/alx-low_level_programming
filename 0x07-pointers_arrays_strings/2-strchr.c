#include "main.h"

/**
* _strchr - locate character in a string
* @s: first input
* @c: second input
* Return: Always 0
*/

char *_strchr(char *s, char *c)
{
int j = 0;
for (; s[j] >= '\0'; j++)
{
if (s[j] == c)
return (&s[j]);
}
return (0);
}
