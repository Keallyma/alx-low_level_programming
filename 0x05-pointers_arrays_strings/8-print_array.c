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

	for (c = 0; c < n; c++)
	{
		_putchar("%d", *(a + c));
		if (c != (n-1))
			_putchar(',');
	}
	_putchar('\n');
}
