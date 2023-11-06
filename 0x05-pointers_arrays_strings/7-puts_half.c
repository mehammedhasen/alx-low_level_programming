#include "main.h"
/**
* puts_half - function prints half string
* @str: first input
* Return: void
*/

void puts_half(char *str)
{
int i;
int n;
int leng = 0;

for (i = 0; str[i] != '\0'; i++)
{leng++;
}
n = (leng - 1) / 2;
for (i = n + 1; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
