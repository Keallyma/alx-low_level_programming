#include <stdio.h>
/**
 * main - Entry point
 * Description: File that prints the size of various of text
 * Return: Always (0) success
 */
int main(void)
{
	char c;
	int i;
	long int ii;
	long long int iii;
	float f;

	print f("Sizes of a char: %d byte(s)\n", sizeof(c));
	print f("Sizes of an int: %d byte(s)\n", sizeof(i));
	print f("Sizes of a long int: %d byte(s)\n", sizeof(ii));
	print f("Sizes of a long long int: %d byte(s)\n", sizeof(iii));
	print f("Sizes of a float: %d byte(s)\n", sizeof(f));
	return(0);
}
