#include "main.h"

/**
* swap_int - swaps the value of two integers
* @a: pointer to the first integer value
* @b: pointer to the second integer value
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
