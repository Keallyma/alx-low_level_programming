#include "main.h"

/**
 * print_rev - print string in reverse, followed by a new line
 * @s: string being printed 
 * Return: no return
 */

void print_rev(char *s)
{
	int c = 0;
       
	while (c <= 0; c - 1; s[c] != '\0')
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
