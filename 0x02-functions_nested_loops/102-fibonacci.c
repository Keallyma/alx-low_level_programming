#include <stdio.h>
/**
 *main - main block
 *
 *Numbers must be seperated with coma and space
 *Return: 0
 */

int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%1u, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%1u\n", j);
		}
		else
		{
			printf("%1u, ", j);
		}
		k = j;
		j += i;
		i = k;
		count++;
	}
	return (0);
}
