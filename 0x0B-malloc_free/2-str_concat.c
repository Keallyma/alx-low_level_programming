#include "main.h"

/**
 * _strlen - count array
 * @s: array of elements
 * Return: i
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 *str_concat - back a pointer to array
 *@s1: first array
 *@s2: second array
 *Return: Always an array dynamic
 */

char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(dst + 1) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++);
	{

		*(dst + i) = *(s2 + j);
		i++;
	}

	return (dst);
}
