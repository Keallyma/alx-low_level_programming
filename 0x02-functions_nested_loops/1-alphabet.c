#include "main.h"

/**
*print_alphabet - print alphabet in lowercases
*Description: A program that prints alphabets in lowercase
*
*/

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
