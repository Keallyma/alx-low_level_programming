#include "main.h"
#include <string.h>

/**
 * rev_string - reverse string
 * @s: being string printed reversely
 * Return: c return
 */

void rev_string(char *s)
{
	int i, c, merc;

	c = strlen(s);
	for (i = 0; i < (c / 2); i++)
	{
		merc = s[i];
		s[i] = s[merc - i - 1];
		s[c - i - 1] = merc;
	}
}
