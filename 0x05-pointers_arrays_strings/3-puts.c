#include "main.h"

/**
 * _puts - print a string, followed by a new line
 * @*stri: value of string input
 * return: no return
 */

void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
