#include <stdio.h>

/**
 *main - sums of the mutiples of 3 or 5
 *
 *Description: multiplies between 0 and 1024
 *Return: 0 (success)
 */

int main(void)
{
	int start_num, end_num, total;

	end-num = 1024;
	total = 0;
	
	for (start_num = 0; start_num < end_num; start_num++)
	{
		if  ((start_num % 3 == 0) || (Start_num % 5 == 0)
		{
			total = total + start_num;
		}
		else
		{
			continue;
		}
	}

	printf("%d", total);
	printf("\n");

	return (0);
}



