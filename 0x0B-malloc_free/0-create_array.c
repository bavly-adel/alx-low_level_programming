#include<stdio.h>
#include <stdlib.h>
/**
 * *create_array - function name
 * @size : sixeof memory
 * @c : character for memory
 * Return: char arr point
 */
char *create_array(unsigned int size, char c) {
unsigned int i;
char *arr = malloc(size * sizeof(char));
if (size == 0)
{
return (NULL);
}
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
