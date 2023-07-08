#include <stdio.h>
/**
 * main - func name
 * @argc : count of arguments
 * @argv : array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
argv[0] = "y";
printf("%d\n", argc - 1);
return (0);
}
