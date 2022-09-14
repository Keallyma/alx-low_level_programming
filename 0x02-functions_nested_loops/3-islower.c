#include "main.h"

/**
 * _islower - to check for lowercase character
 * Description: A function that checks for lowercases
 * Return: 1 if 'c' is letter lowercase or uppercase otherwise 0
 */

int _islower(int c)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
