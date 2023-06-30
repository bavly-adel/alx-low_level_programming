#include<stdio.h>
#include<ctype.h>
/**
 * print_number - the function name
 * @n : number parameter
 */
void print_number(int n)
{
int digit;
int divisor = 1;
if (n < 0)
{
_putchar('-');
n = -n;
}
while (n / divisor >= 10)
{
divisor *= 10;
}
while (divisor > 0)
{
digit = n / divisor;
_putchar(digit + '0');
n -= digit * divisor;
divisor /= 10;
}
}
