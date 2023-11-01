#include "main.h"
/**
* _islower - checks lowercase code
* @c: The character will be checked
* Return: 1 for lowercase or 0 for not lowercase
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{return (1);
}
return (0);
}
