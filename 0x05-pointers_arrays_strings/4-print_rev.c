#include "main.h"
#include <string.h>

/**
 * print_rev - print string in reverse, followed by a new line
 * @s: string being input
 * Return: no return
 */

void print_rev(char *s)
{
	int c; i;

	c = strlen(s);
	
	for (i = (c - 1);  i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
