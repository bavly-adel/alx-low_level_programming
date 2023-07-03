#include<stdio.h>
/**
 * *_memset - function name
 * @s: pointer s to a memory area
 * @b: constant byte b
 * @n: number of bytes to fill
 * Return : pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
