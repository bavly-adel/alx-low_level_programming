#include<stdio.h>
#include "main.h"
/*
* main - Entry point for this program
* This function prints "_putchar"
* Return: Always 0 (Success)
*/
void print_to_98(int n)
{
if (n < 98)
{
while(n <= 98)
{
printf("%d,",n);
n++;
}
}
if (n >= 98)
{
while(n >= 98)
{
printf("%d,",n);
n--;
}
}
}
