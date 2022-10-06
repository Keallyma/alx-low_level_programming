#include <stdio.h>
#include <stlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: input of integer variable that holds the memory size
 * Return: 0 (sucess)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}