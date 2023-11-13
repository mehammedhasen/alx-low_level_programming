#include "main.h"

/**
* _memcpy - copy memory area
* @dest: memory sored
* @src: memory copied
* *@n: bytes
* Return: copied memory n byte changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int j = 0;
int i = n;
for (; j < i; j++)
{
dest[j] = src[j];
j--;
}
return (dest);
}
