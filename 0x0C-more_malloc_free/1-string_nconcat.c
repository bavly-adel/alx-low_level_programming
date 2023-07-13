#include <stdlib.h>
#include<stdio.h>
#include <string.h>
/**
 * *string_nconcat - function name
 * @s1 : first argument
 * @s2 : second arg
 * @n : third
 * Return: return pointer to
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int s1_len = 0;
unsigned int s2_len = 0;
unsigned int i;
if (s1 == NULL)
{
s1 = "";
}
s1_len = strlen(s1);
if (s2 == NULL)
{
s2 = "";
}
s2_len = strlen(s2);
result = malloc(sizeof(char) * (s1_len + n + 1));
if (result == NULL)
{
return (NULL);
}
strcpy(result, s1);
for (i = 0; i < n && i < s2_len; i++)
{
result[s1_len + i] = s2[i];
}
result[s1_len + i] = '\0';
return (result);
}
