#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i, Vadd = 0;
if (argc < 1)
printf("%s\n", "0");
return (0);
for (i = 1; i < argc; i++)
{
if (!atoi(argv[i]))
{
printf("%s\n", "Error");
return (1);
}
Vadd += atoi(argv[i]);
}
printf("%d\n", Vadd);
return (0);
}
