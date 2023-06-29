#include<stdio.h>
/**
 * reverse_array - the function name
 * @a : int1 parameter
 * @n : int2 parameter
 */
void reverse_array(int *a, int n)
{
int i;
int j;
for (i = 0, j = n - 1; i < j; i++, j--)
{
int temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
