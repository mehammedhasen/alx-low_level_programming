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
int i;
for (i = 0; s[i] != '\0'; i++)
leng++;
return (leng);
}
