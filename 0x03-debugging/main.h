#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include "main.h"
void positive_or_negative(int i);
/**
* positive_or_negative - test that prints if integer is positive or negative
* @i: inte
* Return: void
*/

void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is negative\n", i);
}

#endif /* MAIN_H */
