#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: unsigned long int to search
 * @index: index to be returned
 * Return: the value of the bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return ((n >> index) & 1);
}
