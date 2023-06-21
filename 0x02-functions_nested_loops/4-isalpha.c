#include<stdio.h>
#include "main.h"
/*
* main - Entry point for this program
* This function prints "_putchar"
* Return: Always 0 (Success)
*/
int _isalpha(int c)
{
if(c >= 'A' && c <= 'z')
{
return (1);
}
else
{
return(0);
}
}
