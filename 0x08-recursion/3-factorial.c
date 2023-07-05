#include<stdio.h>
/**
 * factorial - function name
 * @s : argument character
 * Return: length of str
 */
int factorial(int n)
{
if (n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
