#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints integer arguments with a separator
 * @separator: - thing to print between numbers
 * @n: - number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
char *sep;
unsigned int i;
va_list nums;
if (separator == NULL || *separator == 0)
sep = "";
else
sep = (char *) separator;
va_start(nums, n);
if (n > 0)
printf("%d", va_arg(nums, int));
for (i = 1; i < n; i++)
printf("%s%d", sep, va_arg(nums, int));
printf("\n");
va_end(nums);
}
