#include <stdlib.h>
#include <time.h>
#include <stdo.h>

/**
*main - Entry point
*Description: This file prints Alphabets
*Return: Always 0 (success)
*/

int main(void)
{
	char alphat = 'a';
	while (alphat <= 'z')
	{
		putchar(alphat);
		alphat++;
	}
	putchar('\n');
	return (0);
}
