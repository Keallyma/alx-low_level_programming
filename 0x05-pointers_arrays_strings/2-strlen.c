#include "main.h"
#include <string.h>

/**
 * _strlen - return the length of a string
 * @s: character pointer
 * Return: length of the string (success)
 */

int _strlen(char *s)
{
	int length, i;

	length = 0;
	i = 0;

	while(*(s+i) != '\0')
	{
		i++;
		length++;
	}

	return (length);
}
