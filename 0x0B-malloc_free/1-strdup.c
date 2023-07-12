#include<stdio.h>
#include <stdlib.h>
/**
 * *_strdup - function name
 * @str : character for memory
 * Return: char arr point
 */
char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
}
char *newstr = malloc(strlen(str) + 1);
if (newstr == NULL)
{
return (NULL);
}
strcpy(newstr, str);
return (newstr);
}
