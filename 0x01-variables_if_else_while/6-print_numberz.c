#include <stdio.h>

/**
*main - Entry point
*Description: number single digits from base 10
*Return: Always 0 (success)
*/

int main(void)
{
	int n = '0';

	while (n < '10')
	{
		putchar (n);
		n++;
	}
	putchar('\n')
	return (0);
}
