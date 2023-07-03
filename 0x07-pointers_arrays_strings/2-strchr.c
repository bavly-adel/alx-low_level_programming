#include<stdio.h>
/**
 * *_strchr - the function name
 * @s : pointer s to a memory area
 * @c : constant byte b
 * Return: if exist (s) else (NULL)
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
