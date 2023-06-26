#include "main.h"
#include <stdio.h>
/**
* _strlen - to get length of string
* @s: pointer to char
* Return: length of char
*/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
