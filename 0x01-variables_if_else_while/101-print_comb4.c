#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{int ones = '0';
int tens = '0';
int hundr = '0';
for (hundr = '0'; hundr <= '9'; hundr++)
{
for (tens = '0'; tens <= '9'; tens++)
{
for (ones = '0'; ones <= '9'; ones++)
{
if (!((ones == tens) || (tens == hundr) || (hundr > tens)))
{
putchar (hundr);
putchar (tens);
putchar (ones);
if (!(ones == '9' && hundr == '7' && tens == '8'))
{putchar (',');
putchar (' ');
}
}
}
}
}
putchar ('\n');
return (0);
}
