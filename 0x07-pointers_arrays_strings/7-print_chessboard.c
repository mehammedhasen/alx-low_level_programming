#include "main.h"
#include <stdio.h>
/**
* print_chessboard - print chese board
* @a: array
* Return: Always 0
*/

void print_chessboard(char (*a)[8])
{
int x, k;
for (x = 0; x < 8; x++)
{
for (k = 0; k < 8, k++)
_putchar(a[x][k]);
_putchar('\n');
}
}
