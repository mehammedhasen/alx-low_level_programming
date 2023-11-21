#include <stdio.h>
#include "main.h"
/**
 * main - Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
int count = 0;
while (argv[count] != NULL)
{
count++;
}
printf("Number of arguments: %d\n", count - 1);
return (0);
}
