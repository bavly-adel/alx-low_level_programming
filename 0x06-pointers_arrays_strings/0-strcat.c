#include<stdio.h>
/**
 * *_strcat - the function name
 * @dest: desttination parameter
 * @src: source parameter
 * Return: ret character
 */

char *_strcat(char *dest, char *src)
{
int i;
int dest_len = 0;
while (dest[dest_len] != '\0') {
dest_len++;
}
for (i = 0; src[i] != '\0'; i++) {
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
return dest;
}
