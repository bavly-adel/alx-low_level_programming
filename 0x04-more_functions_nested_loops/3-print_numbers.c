#include<stdio.h>
#include "main.h"
/*
* printt_numbers- chech if digit
* Return: 1 (if digit) 0 (else)
*/
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i);
putchar('\n');
}
