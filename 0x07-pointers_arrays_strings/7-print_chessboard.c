#include "main.h"
/**
 * print_chessboard - Entry print chess board point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
int x;
int k;
for (x = 0; x < 8; x++)
{
k = 0;
while (k < 8)
_putchar(a[x][k++]);
_putchar('\n');
}
}
