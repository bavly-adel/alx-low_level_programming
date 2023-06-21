#include<stdio.h>
#include "main.h"
/*
* main - Entry point for this program
* This function prints "_putchar"
* Return: Always 0 (Success)
*/
int print_sign(int n)
{
if (n > 0)
{
return (1);
puts("+");
}
else if (n < 0)
{
return (-1);
puts("-");
}
else
{
return (0);
puts("0");
}
}
