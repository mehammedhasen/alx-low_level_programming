#include "main.h"

/**
* _strncpy - Entry point
* @dest: first input
* @src: second input
* @n: 3rd input
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
while (i < n && src[i] != '\0')
{dest[i] = src[i];
i++;
}
while (i < n)
{dest[i] = '\0';
i++;
}
return (dest);
}
