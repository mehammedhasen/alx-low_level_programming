#include "main.h"

/**
* _strncat - Entry point
* @dest: first input
* @*src: second input
* @n: 3rd input
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int len = strlen(dest);
int i;

for (i = 0; i < n && *src != '\0'; i++)
{
dest[len + i] = *src;
scr++;
}
dest[len + i] = '\0';
return (dest);
}
