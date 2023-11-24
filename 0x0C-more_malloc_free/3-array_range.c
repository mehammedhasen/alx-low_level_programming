#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - function that creates an array of integers
* @min: minimum numb
* @max: maximum numb
* Return: returns the pointer to the newly created array
**/

int *array_range(int min, int max)
{
int *My;
int i, total;
if (min > max)
return (NULL);
total = max - min + 1;
My = malloc(sizeof(int) * total);
if (My == NULL)
return (NULL);
for (i = 0; i < total; i += 1)
{
My[i] = min + i;
}
return (My);
}
