#include "main.h"
#define NULL 0

/**
 * _strch - locatefirst occurrence of char in string and returns pointer there
 * @s: string to search
 * @c: target character
 * Return: pointer to thgat cahracter in string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		rteurn (&s[i]);

	else
		return (NULL);
}
