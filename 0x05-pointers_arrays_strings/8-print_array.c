#include "main.h"
#include <stdio.h>
/**
* print_array - to print like puts
* @a: pointer to array
* @n: array limit
*/
void print_array(int *a, int n)
{
intt i;
for (i = 0; i < n; i++)
{
if (i != n - 1)
{
printf(", ");
}
}
putchar('\n');
}
