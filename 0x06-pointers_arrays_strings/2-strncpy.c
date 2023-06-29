#include<stdio.h>
/**
 * *_strncpy - the function name
 * @dest : desttination parameter
 * @src : source parameter
 * @n : number as parameter
 * Return: string after concat
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (i = 0; i < n; i++) {
dest[i] = '\0';
}
return (dest);
}
