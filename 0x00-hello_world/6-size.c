#include <stdio.h>

/**
 * main - Entry point
 * Description: File that prints the size of various types of text
 * Return: Always (0) success
 */
int main(void)
{
	printf("Sizes of a char: %d byte(s)\n", sizeof(char));
	printf("Sizes of an int: %d byte(s)\n", sizeof(int));
	printf("Sizes of a long int: %d byte(s)\n", sizeof(long int));
	printf("Sizes of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Sizes of a float: %d byte(s)\n", sizeof(float));
	return(0);
}
