#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string arguments with a separator
 * @separator: - thing to print between strings
 * @n: - number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *sep, *ptr;
unsigned int i;
va_list num;
if (separator == NULL || *separator == 0)
sep = "";
else
sep = (char *) separator;
va_start(num, n);
if (n > 0)
printf("%s", va_arg(num, char *));
for (i = 1; i < n; i++)
{
ptr = va_arg(num, char*);
if (ptr == NULL)
ptr = "(nil)";
printf("%s%s", sep, ptr);
}
printf("\n");
va_end(num);
}
