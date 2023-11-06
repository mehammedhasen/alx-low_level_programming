#include "main.h"
/**
* _strlen - function that returns length of a string
* @s: input string
* Return: length
*/

void _strlen(char *s)
{
int leng = 0;
while (*s != '\0')
{leng++;
s++;
}
return (leng);
}
