#include "main.h"
/**
* _strlen - function that returns length of a string
* @s: input string
* @c: starting from 0
* Return: leng
*/
int  _strlen(char *s)
{
int leng = 0;
int c;
for (c = 0; s[c] != '\0'; c++)
leng++;
return (leng);
}
