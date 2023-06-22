#include<stdio.h>
#include "main.h"
/*
* main - Entry point for this program
* This function prints "_putchar"
* Return: Always 0 (Success)
*/
void jack_bauer(void) {
int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
printf("%02d:%02d\n", hour, minute);
}
}
}

