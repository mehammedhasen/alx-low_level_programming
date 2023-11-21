#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point that creates an array of chars
 *@size: size of the array
 *@c: character ti fill in the array
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *CreateAarray = NULL;
if (size == 0)
return (NULL);
if (size != 0)
{
CreateAarray = (char *)malloc(size * sizeof(char));
if (CreateAarray != NULL)
{
for (i = 0; i < size; i++)
CreateAarray[i] = c;
}
}
return (CreateAarray);
}
