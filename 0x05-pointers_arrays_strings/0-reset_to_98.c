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
	int *p;

	p = &n;
	n = 98;
	printf("Value of 'n' before the call: %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);
	modif_my_param(p);
	printf("Value of 'n' after the call: %d\n", n);

	_putchar('\n');
}
