#include "main.h"

/**
 *print_sign- print the sign of a number 
 *Description: print signs of numbers
 *Return: 1 if n is greater than zero otherwise -1 if n is less otherwise 0
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
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	return (0);
}
