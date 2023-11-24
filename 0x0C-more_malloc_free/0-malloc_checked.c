#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function that allocate memory using malloc
 * @b: unsigned int type
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
int *Myptr;
Myptr = malloc(b);
if (Myptr == NULL)
exit(98);
return (Myptr);
}
