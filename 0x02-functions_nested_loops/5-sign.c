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
printf("+");
return (1);
}
else if (n < 0)
{
printf("-");
return (-1);
}
else
{
printf("0");
return (0);
}
}
