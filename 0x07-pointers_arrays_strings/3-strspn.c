#include<stdio.h>
/**
 * _strspn - function name
 * @s : pointer s to a memory area
 * @accept : constant byte b
 * Return: pointer to the memory area s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
while (*s != '\0')
{
char *ptr = accept;
while (*ptr != '\0')
{
if (*s == *ptr)
{
count++;
break;
}
ptr++;
}
if (*ptr == '\0')
{
break;
}
s++;
}
return (count);
}
