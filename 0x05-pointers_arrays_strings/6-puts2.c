#include "main.h"
#include <stdio.h>
/**
* puts2 - to print like puts
* @str: pointer to char
*/
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i += 2;
}
putchar('\n');
}
