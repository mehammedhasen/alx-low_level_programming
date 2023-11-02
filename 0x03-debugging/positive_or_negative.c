/**
* positive_or_negative - tests if integer is positive or negative
* @i: inte
* Return: void
*/

#include <stdio.h>
#include "main.h"

void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is negative\n", i);
}
