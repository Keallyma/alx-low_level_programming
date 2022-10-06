#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: integer variable that holds the memory size
 * Return: 0 (success)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
