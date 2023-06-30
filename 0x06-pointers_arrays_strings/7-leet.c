#include<stdio.h>
/**
 * leet - the function name
 * @str : int1 parameter
 * Return: int2 parameter
 */
char *leet(char *str) {
char *letters = "aeotlAEOTL";
char *replacements = "4307104310";
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j]) {
str[i] = replacements[j];
break;
}
}
}
return (str);
}
