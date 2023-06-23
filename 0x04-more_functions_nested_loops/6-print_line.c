#include<stdio.h>
#include "main.h"
/*
* print_line - print digits
*/
void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
while (n > 0)
{
putchar('_');
putchar('\n');
}
putchar('\n');
}
}
