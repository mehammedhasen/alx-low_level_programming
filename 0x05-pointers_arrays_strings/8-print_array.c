#include "main.h"
/**
* print_array - function prints array string
* @a: first input
* @n: second input
* Return: void
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf('\n');
}
