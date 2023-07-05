#include<stdio.h>
/**
 * _pow_recursion - function name
 * @x : argument character
 * @y : the power int
 * Return: length of str
 */
int _pow_recursion(int x, int y)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
