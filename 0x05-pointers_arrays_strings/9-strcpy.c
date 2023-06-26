#include "main.h"
#include <stdio.h>
/**
* *_strcpy - to print like puts
* @src: pointer to array
* @dest: array limit
*/
void char *_strcpy(char *dest, char *src)
{
int i;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return dest;
}
