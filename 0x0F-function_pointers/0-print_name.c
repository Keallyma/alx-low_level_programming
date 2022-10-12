#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a given name
 * @name: char to display to the stdout
 * @f: A pointer function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
