#include "main.h"

/**
 * print_rev - print string in reverse, followed by a new line
 * @s: string being input
 * Return: no return
 */

void print_rev(char *s)
{
	int c = 0;
	
	while (s[c] != '\0')
	{
		_putchar(s);
		c--;
	}
	_putchar('\n');
}
