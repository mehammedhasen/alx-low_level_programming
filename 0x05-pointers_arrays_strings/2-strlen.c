#include "main.h"
/**
* _strlen - function that returns length of a string
* @s: input string
* Return: leng
*/
int  _strlen(char *s)
{
int i;
int leng = 0;
for (i = 0; s[i] != '\0'; i++)
leng++;
return (leng);
}
