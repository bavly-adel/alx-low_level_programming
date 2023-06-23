#include<stdio.h>
#include "main.h"
/*
* _isdigit - chech if digit
* return - 1 (if digit) 0 (else)
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
