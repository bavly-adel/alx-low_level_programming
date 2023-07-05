#include<stdio.h>
/**
 * _print_rev_recursion - function name
 * @s : argument character
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
else
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
