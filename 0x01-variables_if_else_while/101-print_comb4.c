#include <stdio.h>

/**
*main - Entry point
*
* Return: Always 0 (success)
*/

int main(void)
{
	int hund;
	int ten;
	int unit;

	for (hund = '0'; hund <= '9'; hund++)
	{
		for (ten = (hund + 1); ten <= '9'; ten++)
		{
			for (unit = (ten + 1); unit <= '9'; unit++)
			{
				putchar(hund);
				putchar(ten);
				putchar(unit);

				if (hund != '7' || ten != '8' || unit != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
