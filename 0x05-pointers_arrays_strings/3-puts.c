#include "main.h"

/**
 * _puts - print a string, followed by a new line
 * @*stri: value of string input
 * return: no return
 */

void _puts(char *str)
{
	int count = 0;

	while (count != '\0')
	{
		_putchar(count);
		count++;
	}
	_putchar('\n');
}
