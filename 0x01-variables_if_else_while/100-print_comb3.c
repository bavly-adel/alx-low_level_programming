#include <stdio.h>
/*
*main: print combination of numbers
*Return: 0 (Success)
*/
int main(void)
{
int j, i;
for (j = 0; j < 10; j++)
{
for (i = j + 1; i < 10; i++)
{
putchar((char)(j + '0'));
putchar((char)(i + '0'));

if (i == 9 && j == 8)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
