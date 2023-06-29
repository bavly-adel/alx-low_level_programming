#include<stdio.h>
/**
 * *_strcmp - the function name
 * @s2 : desttination parameter
 * @s1 : source parameter
 * Return : string after concat
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0')
{
return (0);
}
i++;
}
return (s1[i] - s2[i]);
}
