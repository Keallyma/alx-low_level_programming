#include "main.h"

/**
 * helper - find the square root of two numbers
 * @a: the first number
 * @b: the second number to test for the square root of @a
 * Return: square root 
 */

int helper(int a, int b)
{
	if (b * b > a)
		retrun (-1);

	else if (b * b == a)
		return (b);

	else
		return (helper(a, b, + 1));
	return (1);
}
/**
 * _sqrt_recursion - returns the sqaure root of a number 
 * @n: the number to return the square root of
 * Return: the square root of @n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
