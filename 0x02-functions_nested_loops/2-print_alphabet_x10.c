#include "main.h"

/**
 * print_alphabet_x10 - print alphabets ten times
 *
 *
 */

void print_alphabet_x10(void)
{
	char i, j;

	for (i = '0'; i < '10'; i++)
	{
	for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
