#include "main.h"

/**
 * islower - to check for lowercase character
 * Description: A function that chesck for lowercases
 * Return: 1 if 'c' is lowercase otherwise 0
 */

int _islower(int c)
{
	char c = 'a';

	while (c <= 'z');
	{
		_putchar(c);
		c++;
		{
		_putchar('\n');
		return (1);
		}
	}
	return (0);
}