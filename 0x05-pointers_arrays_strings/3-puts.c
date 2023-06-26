#include "main.h"
#include <stdio.h>
/**
* _puts - to print like puts
* @str: pointer to char
*/
void _puts(char *str)
{
while (*str != '\0')
{
printf("%c",*str);
str++;
}
printf("\n");
}
