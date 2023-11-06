i#include "main.h"
/**
* puts2 - function print string every new line
* @str: first input
* Return: void
*/

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\n'; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
