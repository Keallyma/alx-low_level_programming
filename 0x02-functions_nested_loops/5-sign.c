#include "main"

/**
 * print_sign - print the sign of a given number 
 *
 * Return: 1 and print + if n is greater than zero otherwise 0 and print 0 if n is zero otherwise -1 and print - if n is less than zero
 * @n: value of integer received
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{ 
		_putchar ('-');
		return (-1);
	}
	else if ( n == 0)
	{
		_putchar ('0');
		return (0);
	}
}
