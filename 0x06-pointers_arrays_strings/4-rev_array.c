#include "main.h"

/**
* reverse_array - Entry point riverse array
* @a: first input
* @n: second input
* Return: void
*/

void reverse_array(int *a, int n)
{
int i = 0;
int j;
for (i < n--; i++)
{j = a[i];
a[i] = a[n];
a[n] = j;
}
}
