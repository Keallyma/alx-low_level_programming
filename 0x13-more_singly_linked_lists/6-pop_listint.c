#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list
 * @head: pointer to the first node of the linked list
 * Return: the date inside the elements that was deleted or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (head || !*head)
		return (0);

	head_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (head_data);
}
