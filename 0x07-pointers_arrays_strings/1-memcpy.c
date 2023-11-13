#include "main.h"

/**
* _memcpy - copy memory area
* @dest: memory sored
* @src: memory copied
* @n: bytes
* Return: Always 0 copied memory n byte changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
