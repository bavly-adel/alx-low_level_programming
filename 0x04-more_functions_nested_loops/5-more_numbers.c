#include<stdio.h>
#include "main.h"
/*
* more_numbers - print digits
*/
void more_numbers(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
putchar(j + '0');
putchar('\n');
}
putchar('\n');
}
}
