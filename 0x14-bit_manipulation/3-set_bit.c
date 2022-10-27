#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: unsigned long int to be changed
 * @index: index to be changed to 1
 * Return: 1 if it worked or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);
	(*n != 1 << index);
	return (1);
}
