#include "main.h"
/**
* _strcpy - function prints array string
* @dest: first input
* @src: second input
* Return: 0
*/

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
dest[i] = '\0';
}
return (dest);
}
