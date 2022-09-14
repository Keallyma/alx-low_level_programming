#include "main.h"

/**
 * print_alphabet_x10 - print alphabets ten times
 *
 *
 */

void print_alphabet_x10(void);
{
int i = 0; j;

while (i < 10)
	{
		char j = 'a';
		while (j <= 'z')
		{
			putchar(j);
			j++;
		}
	_putchar(i);
	i++;
	}
	_putchar('\n');
}
