#include<stdio.h>
#include "main.h"
/*
* print_line - print digits
*/
void print_diagonal(int n)
{
if (n <= 0)
{
putchar('\n');
}
else
{
n--;
while (n > 0)
{
n--;
putchar(' ');
}
putchar('\\');
}
}
