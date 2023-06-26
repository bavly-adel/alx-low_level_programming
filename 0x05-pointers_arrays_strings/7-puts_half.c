#include "main.h"
#include <stdio.h>
/**
* puts_half - to print like puts
* @str: pointer to char
*/
void puts_half(char *str)
{
int len = 0;
int next;
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
{
start = len / 2;
}
else
{
start = (len - 1) / 2;
}
for (int i = start; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}
