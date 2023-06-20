#include<stdio.h>
/*
* main - Entry point for this program
* This function prints "_putchar"
* Return: Always 0 (Success)
*/
void print_alphabet(void) {
    int i;
    for (i = 'a'; i <= 'z'; i++) {
        putchar(i);
    }
}

int main(void) {
    print_alphabet();
    return 0;
}
