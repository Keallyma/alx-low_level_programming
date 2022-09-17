#include "main.h"

/**
 * print_most_numbers - prints most numbers between zero to nine
 * (neither 2 nor 4).
 * Return: no return.
 */

void print_most_numbers(void)
{
	Int ch;

	for (ch = 48; ch < 58; ch++)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
	_putchar('\n');
}
