#include<stdio.h>
/**
 * *_strncat - the function name
 * @dest : desttination parameter
 * @src : source parameter
 * @n : number as parameter
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int dest_len = 0;
while (dest[dest_len] != '\0')
{
dest_len++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
return dest;
}
