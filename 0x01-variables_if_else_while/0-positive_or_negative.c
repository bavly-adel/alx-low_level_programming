#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * @brief This function is the entry point of the program.
 *
 * @return int The exit status of the program.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
       	{
		printf("%d is positive\n", n);
	}
	return (0);
}
