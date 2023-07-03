#include<stdio.h>
/**
 * *_strstr - function name
 * @haystack: pointer s to a memory area
 * @needle: constant byte b
 * Return : char to tea
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *hptr = haystack;
char *nptr = needle;
while (*nptr != '\0' && *hptr == *nptr)
{
hptr++;
nptr++;
}
if (*nptr == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
