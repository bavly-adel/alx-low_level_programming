#include<stdio.h>
/**
 * factorial - function name
 * @n : argument character
 * Return: length of str
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (n * factorial(n + 1));
}
else
{
return (n * factorial(n - 1));
}
}
