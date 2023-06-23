#include<stdio.h>
#include "main.h"
/*
* _isdigit: chech if char is uppercase
* Return: 1 (if upper) 0 (if lower)
*/
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
