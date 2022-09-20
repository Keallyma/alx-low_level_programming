#include "main.h"

/**
 * print_rev - print string in reverse, followed by a new line
 * @s: string being input
 * Return: no return
 */

void print_rev(char *s)
{
	int c = _strlen -1;
	
	while (c = (_strlen - 1); c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
