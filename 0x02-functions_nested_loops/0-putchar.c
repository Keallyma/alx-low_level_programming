#include <stdio.h>
#include <main.h>

/**
*main - A program that prints _putchar
*Description: This program prints _putchar followed by a new line
*Return: Always 0 (success)
*/

init main()
{
	int i = 0,  j;
	
	while (i < 4)
	{
		j = 0;
		while(j < 2)
		{
			putchar("1 ");
			j++;
		}
		putchar("*\n");
		i++;
	}
	return (0);
}
