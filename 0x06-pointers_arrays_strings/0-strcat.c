#include<stdio.h>
/**
 * *_strcat - the function name
 * @dest : desttination parameter
 * @src : source parameter
 * Return: string
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

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
