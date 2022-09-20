#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer parameter
 * @n: integer input
 */

void print_array(int *a, int n)
{
	int c = 0;

	for (; c < n; c++)
	{
		printf("%d", *(a + c));
		if (c != (n-1))
			printf(", ");
	}
	printf("\n");
}
