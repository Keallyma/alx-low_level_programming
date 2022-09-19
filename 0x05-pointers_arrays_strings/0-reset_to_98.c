#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - take a pointer to an int as parameter
 * update the value it points to to 98.
 * Return: no return.
 */

void reset_to_98(int *n)
{
	int *n;
	
	int n = *n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
}
