#include "main.h"
#include <stdio.h>
/**
* swap_int - swap to integers
* @a: pointer to first int
* @b: pointer to second int
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
