#include "main.h"

/**
 * print_alphabet_x10 - print alphabets ten times
 *
 *
 */

void print_alphabet_x10(void);
{
	char alphat = 'a'
	
	while (alphat <= 'z')
	{
		_putchar (alphat);
		alphat++;
	}
	_putchar('10\n');
}
