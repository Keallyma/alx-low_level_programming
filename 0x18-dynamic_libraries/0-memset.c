#include "main.h"

/**
 * *_memset - fill memory with a constant byte
 * @s: pointer memory area
 * @b: value of constant byte
 * @n: value for number of bytes
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
