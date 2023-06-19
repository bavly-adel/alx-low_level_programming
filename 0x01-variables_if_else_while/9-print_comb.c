#include <stdio.h>
int main(void)
{
int j;
for (j = 0; j < 10; j++)
{
putchar(j(char)(j+ '0'));
if (j == 9)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
return (0);
}
