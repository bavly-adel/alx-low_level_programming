#include<stdio.h>
/**
 * malloc_checked - function name
 * @b : first argument
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
}