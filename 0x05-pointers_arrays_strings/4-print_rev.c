#include "main.h"
#include <stdio.h>
/**
* print_rev - to print like puts
* @s: pointer to char
*/
void print_rev(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
while (len > 0)
{
s--;
putchar(*s);
len--;
}
putchar('\n');
}
