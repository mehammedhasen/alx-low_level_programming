#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string into newly allocated array
 * @str: string to duplicate
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
int size = 0;
char *Nptr, *ret;
if (!str)
return (NULL);
Nptr = str;
while (*Nptr++)
size++;
ret = malloc(size + 1);
if (!ret)
return (NULL);
Nptr = ret;
while (*str)
*Nptr++ = *str++;
*Nptr = 0;
return (ret);
}
