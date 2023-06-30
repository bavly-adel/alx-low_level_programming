#include<stdio.h>
#include<string.h>
/**
 * infinite_add - the function name
 * @n1 : char1 parameter
 * @n2 : char2 parameter
 * @r : char3 parameter
 * @size_r : size parameter
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
if (len1 >= size_r || len2 >= size_r)
{
return 0;
}
int carry = 0, sum = 0, i = len1 - 1, j = len2 - 1, k = size_r - 1;
while (i >= 0 || j >= 0 || carry > 0)
{
int digit1 = i >= 0 ? n1[i] - '0' : 0;
int digit2 = j >= 0 ? n2[j] - '0' : 0;
sum = digit1 + digit2 + carry;
if (sum >= 10)
{
carry = 1;
sum -= 10;
}
else
{
carry = 0;
}
r[k--] = sum + '0';
i--;
j--;
}
if (k < 0)
{
return (0);
}
return (&r[k + 1]);
}
