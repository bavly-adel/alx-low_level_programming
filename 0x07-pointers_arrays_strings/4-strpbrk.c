#include<stdio.h>
/**
 * *_strpbrk - function name
 * @s: pointer s to a memory area
 * @accept: constant byte b
 * Return : pointer to the memory area s
 */
char *_strpbrk(char *s, char *accept)
{
char *ptr;
while (*s != '\0')
{
*ptr = accept;
while (*ptr != '\0')
{
if (*s == *ptr)
{
return (s);
}
ptr++;
}
s++;
}
return NULL;
}
