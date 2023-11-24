#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - function allocates memory for an array
* @nmemb: first number
* @size: second number of bytes
* Return: pointer to allocated memory or NULL if it fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *My;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
My = malloc(size * nmemb);
if (My == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
My[i] = 0;
return (My);
}
