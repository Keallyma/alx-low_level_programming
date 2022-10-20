#include "lists.h"

/**
 * list_len - return the number of the elements in a list
 * @h: singly linked list
 * Return: Number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
