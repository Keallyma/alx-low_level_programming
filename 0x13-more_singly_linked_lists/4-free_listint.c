#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: pointer to the first node of the linked list to fred
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
