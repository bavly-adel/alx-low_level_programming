#include<stdio.h>
/**
 * *create_array - function name
 * @size : sixeof memory
 * @c : character for memory
 * Return: char arr point
 */
char *create_array(unsigned int size, char c) {
char *arr;
unsigned int i;
if (size == 0)
{
return (NULL);
}
*arr = malloc(size * sizeof(char));
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
