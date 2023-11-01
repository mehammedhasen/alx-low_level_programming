#include "main.h"
/**
* print_alphabet_x10 - create the alphabet 10 times
*
* Return: void
*/
void print_alphabet_x10(void)
{char Alpha;
int i;
i = 0;
while (i < 10)
{
for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
{_putchar(Alpha);
}
_putchar('\n');
i++;
}
}
