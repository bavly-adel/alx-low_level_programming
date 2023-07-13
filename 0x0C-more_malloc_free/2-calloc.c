#include <stdlib.h>
#include<stdio.h>
#include <string.h>
/**
 * *_calloc - function name
 * @nmemb : first argument
 * @size : return pointer to
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, total_size);
return (ptr);
}
