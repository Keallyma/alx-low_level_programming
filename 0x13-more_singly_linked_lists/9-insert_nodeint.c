#include "lists.h"

/**insert_nodeint_at_index - insert a new node at a given position
 * @head: the head node
 * @idx: index where new node is to be added
 * @n: integer data of the new node
 * Return: address of the newly inserted node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp = *head;
	size_t i = 0;

	node = malloc(sizeof(listint_t));
	if (node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head && !idx)
	{
		*head = node;
		return (node);
	}

	else if (!idx)
	{
		node->next = temp;
		*head = node;
		return (node);
	}

	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	node->next = temp->next;
	temp->next = node;

	return (node);
}
