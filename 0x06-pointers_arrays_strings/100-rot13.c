#include<stdio.h>
#include<ctype.h>
/**
 * rot13 - the function name
 * @str : a string to change
 * Return: rot str
 */
char *rot13(char *str)
{
char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i;
int j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; input[j] != '\0'; j++)
{
if (str[i] == input[j])
{
str[i] = output[j];
break;
}
}
}
return (str);
}
