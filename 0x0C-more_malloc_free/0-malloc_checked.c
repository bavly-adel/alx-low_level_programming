#include <stdlib.h>
#include<stdio.h>
#include <limits.h>
/**
 * *malloc_checked - function name
 * @b : first argument
 * Return: return pointer to
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(98);
}
return (ptr);
}
