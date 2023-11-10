#include <stdio.h>
#include "main.h"

/**
* rot13 - Entry point encoder
* @s: first input
* Return: *s
*/

char *rot13(char *s)
{
int i, j;
char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char d1rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == d1[j])
{
s[i] = d1rot[j];
break;
}
}
}
return (s);
}
