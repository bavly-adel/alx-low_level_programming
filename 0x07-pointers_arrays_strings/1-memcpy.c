#include<stdio.h>
/**
 * _memcpy - function name
 * @dest: pointer s to a memory area
 * @src: constant byte b
 * @n: number of bytes to fill
 * Return : pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
