#include<stdio.h>
#include "main.h"
/*
* print_square - print digits
*/
void print_square(int size)
{
int i;
if (size <= 0)
{
putchar('\n');
}
else
{
i = size;
while (size > 0)
{
while (i > 0)
{
putchar('#');
i--;
}
putchar('\n');
size--;
}
putchar('\n');
}
}
