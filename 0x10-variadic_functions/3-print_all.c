#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * printf_char - printfs a char from var args
 * @num: va_list to print from
 * Return: void
 */
void printf_char(va_list num)
{
printf("%c", (char) va_arg(num, int));
}

/**
 * printf_int - printfs an int from var args
 * @num: va_list to print from
 * Return: void
 */
void printf_int(va_list num)
{
printf("%d", va_arg(num, int));
}

/**
 * printf_float - printfs a float from var args
 * @num: va_list to print from
 * Return: void
 */
void printf_float(va_list num)
{
printf("%f", (float) va_arg(num, double));
}

/**
 * printf_string - printfs a string from var args
 * @num: va_list to print from
 * Return: void
 */
void printf_string(va_list num)
{
char *str = va_arg(num, char*);
while (str != NULL)
{
printf("%s", str);
return;
}
printf("(nil)");
}


/**
 * print_all - prints various types given a format string for the arguments
 * @format: string containing type information for args
 * Return: void
 */
void print_all(const char * const format, ...)
{
const char *ptr;
va_list num;
funckey key[4] = { {printf_char, 'c'}, {printf_int, 'i'},
{printf_float, 'f'}, {printf_string, 's'} };
int keyind = 0, notfirst = 0;
ptr = format;
va_start(num, format);
while (format != NULL && *ptr)
{
if (key[keyind].spec == *ptr)
{
if (notfirst)
printf(", ");
notfirst = 1;
key[keyind].f(num);
ptr++;
keyind = -1;
}
keyind++;
ptr += keyind / 4;
keyind %= 4;
}
printf("\n");
va_end(num);
}
