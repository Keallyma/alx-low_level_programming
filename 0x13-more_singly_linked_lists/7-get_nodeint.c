#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in linked list
 * @head: pointer to the first node in the linked list
 * @index: inde of the node to be returned
 * Return: pointer to the node in search of, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
