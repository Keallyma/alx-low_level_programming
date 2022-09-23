#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: pinter to array
 * @n: number of elements an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
