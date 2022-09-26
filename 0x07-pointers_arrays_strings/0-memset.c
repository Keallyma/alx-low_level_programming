#include "main.h"

/**
 * *_memset - fill memory with a constant byte
 * @b: va;ue of constant byte
 * @n: value for number of bytes
 * Return: nothing
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n;

	n = 0;
	while (n < s)
	{
		if (n % 10)
		{
			_printf(" ");
		}
		if (!(n % 10) && n)
		{
			printf("\n");
		}
		printf("0b%02b", buffer[n]);
		n++;
	}
	printf("\n");
}
