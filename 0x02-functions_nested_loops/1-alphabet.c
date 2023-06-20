#include<stdio.h>
/*
* main - Entry point for this program
* This function prints "_putchar"
* Return: Always 0 (Success)
*/
void print_alphabet(void) {
    char c;
    for (c = 'a'; c <= 'z'; c++) {
        _putchar(c);
    }
    _putchar('\n');
}
