#include<stdio.h>
#include "main.h"
/*
* main - Entry point for this program
* This function prints "_putchar"
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void) {
char c;
int i=0;
while (i<10)
{
for (c = 'a'; c <= 'z'; c++) {
putchar(c);
}
i++;
}
putchar('\n');
}
