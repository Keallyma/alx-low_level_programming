#include "main.h"

/**
 * _isdigit - check for digits through zero to nine
 * @c: value of character receved
 * Return: 1 if c is a digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

