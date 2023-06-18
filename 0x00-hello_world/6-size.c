#include<stdio.h>
/*
*main: print types sizes
*Return: 0 (Success)
*/
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu bytes\n", sizeof(int));
printf("Size of a long int: %zu bytes\n", sizeof(long));
printf("Size of a long long int: %zu bytes\n", sizeof(long long));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
