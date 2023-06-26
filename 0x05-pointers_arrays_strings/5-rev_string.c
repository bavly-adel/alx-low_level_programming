#include "main.h"
#include <stdio.h>
/**
* rev_string - to print like puts
* @s: pointer to char
*/
void rev_string(char *s)
{
char temp;
int i;
int len = 0;
while (s[len] != '\0')
{
len++;
}
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
