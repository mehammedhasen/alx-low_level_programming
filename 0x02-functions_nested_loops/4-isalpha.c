#include "main.h"
/**
* _isalpha - checks alphabet character code
* @c: The character will be checked
* Return: 1 for alphabet character or 0 for other
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{return (1);
}
return (0);
}
