#include <unistd.h>
/**
* _putchar - writes a char c to stdout
* @c: the characer to print
*
* Return: sucess 1
*/
int _putchar(char c)
{return (write(1, &c, 1));
}
