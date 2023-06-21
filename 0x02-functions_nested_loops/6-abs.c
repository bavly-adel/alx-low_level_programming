#include<stdio.h>
#include "main.h"
/*
* main - Entry point for this program
* This function prints "_putchar"
* Return: Always 0 (Success)
*/
int _abs(int n) {
    if (n < 0) {
        return -n;
    } else {
        return n;
    }
}
