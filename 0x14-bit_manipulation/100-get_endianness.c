#include "main.h"

/**
 * get_endianness - check for endianness
 * Return: 0 if big endianness and 1 if little endianness
 */

int get_endianness(void)
{
	unsigned int b = 1;
	char *a = (char *)&b;

	if (*a)
		return (1);
	else
		return (0);
}
