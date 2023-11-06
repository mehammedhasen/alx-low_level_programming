#include "main.h"
/**
* swap_int - function that swap two integers
* @a: input int
* @b: input int
* Return: void
*/

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
