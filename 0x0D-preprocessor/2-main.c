#include <stdio.h>

/**
 * main - program compilation
 * Description: Program prints the name file it was compiled from
 * Return: 0 (success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
