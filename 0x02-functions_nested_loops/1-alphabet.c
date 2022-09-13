#include "main.h"

/**
*main - print alphabet in lowercases
*Description: A program that prints alphabets in lowercase
*
*/

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar('alphabet');
		alphabet++;
	}
	_putchar('\n');
}
