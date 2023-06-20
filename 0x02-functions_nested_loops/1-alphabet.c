#include<stdio.h>
/*
* main - Entry point for this program
* This function prints "_putchar"
* Return: Always 0 (Success)
*/
int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet()
{
int i;
for(i = 97;i < 123;i++)
{
putchar(i);
putchar('\n');
}
}
