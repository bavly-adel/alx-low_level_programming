#include<stdio.h>
/**
 * string_toupper - the function name
 * @str : a string to change
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
}
i++;
}
return (str);
}
