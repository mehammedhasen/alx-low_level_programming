#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{char Alphabet;
Alphabet = 'a';
while (Alphabet <= 'z')
{
if ((Alphabet != 'q' && Alphabet != 'e') && Alphabet <= 'z'
putchar(Alphabet);
Alphabet++;
}
putchar ('\n');
return (0);
}
