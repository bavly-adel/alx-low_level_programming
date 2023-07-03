#include<stdio.h>
/**
 * print_diagsums - function name
 * @a: pointer s to a memory area
 * @size: the size of num
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
int i;
for (i = 0; i < size; i++)
{
sum1 += *(a + i*size + i);
sum2 += *(a + i*size + size - i - 1);
}
printf("Sum of diagonal 1: %d\n", sum1);
printf("Sum of diagonal 2: %d\n", sum2);
}
