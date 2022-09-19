#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - take a pointer to an int as parameter
 * update the value it points to to 98.
 * @n: value received.
 * Return: no return.
 */

void reset_to_98(int *n)
{
	*n = 98;

	_putchar('\n');
}
