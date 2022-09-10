#include <stdio.h>

/**
*main - Print alphabets backwards
*
*Return: Always 0 (sucess)
*/

int main(void)
{
	char n = 'z';
	
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
