#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{char b;
char c;
b = 'a';
c = 'A';
while (b <= 'z')
{putchar(b);
b++;
}
while (c <= 'Z')
{putchar(c);
c++;
}
putchar ('\n');
return (0);
}

