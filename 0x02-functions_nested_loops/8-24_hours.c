#include "main.h"

/**
 *jack_bauer - print time
 *
 *Description: prints a list of time
 *Return: Always 0 (success)
 */

void jack_bauer(void)
{
	int i, t;

	for (i = 0; i < 24; i++)
	{
		for (t = 0; t < 60; t++)
		{
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
			_putchar(':');
			_putchar(t / 10 + 48);
			_putchar(t % 10 + 48);
			_putchar('\n');
		}
	}
}
