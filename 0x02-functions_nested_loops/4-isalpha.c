#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * Description: This function checks for alphabetic charcater
 * Return: 1 if c is a letter otherwise 0
 * @c: integer value received
 */

int _isalpha(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

