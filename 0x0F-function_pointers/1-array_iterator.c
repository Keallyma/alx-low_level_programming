#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - calls a function to act on elements of an array
 * @array: Name of the array the function acts on
 * @size: size of the passed array to function
 * @action: The function that acts on the array of elements
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
