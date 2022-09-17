#include "main.h"

/**
 * print_numbers - print numbers from zero to nine
 * @c: value of number received
 * Return: void
 */

void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
		_putchar('\n');
}
