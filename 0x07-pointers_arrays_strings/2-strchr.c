#include<stdio.h>
/**
 * *_strchr - function name
 * @s: pointer s to a memory area
 * @c: constant byte b
 * Return : pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
