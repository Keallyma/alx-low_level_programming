#include "main.h"
#include <string.h>

/**
 * rev_string - reverse string
 * @s: being string printed reversely
 * Return: c return
 */

void rev_string(char *s)
{
	int i, c, m;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	c = i - 1;
	m = c / 2;
	while (m >= 0)
	{
		first = s[c - m];
		last = s[m];
		s[m] = first;
		s[c - m] = last;
		m--;
	}
}
