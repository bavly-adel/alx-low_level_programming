#include <stdio.h>
/*
*main: print combination of numbers
*Return: 0 (Success)
*/
int main(void)
{
int j, i, h;
for (j = 0; j < 10; j++)
{
for (i = j + 1; i < 10; i++)
{
for (h = i + 1; h < 10; h++)
{
putchar((char)(j + '0'));
putchar((char)(i + '0'));
putchar((char)(h + '0'));
if (i == 8 && j == 7 && h == 9)
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
}
return (0);
}
