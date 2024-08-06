#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - deletes the head node of a linked list
 *@head: head of the list
 *
 *Return:if the link is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int storage;

	if (*head == NULL)
		return (0);

	temp = *head;
	storage = temp->n;
	free(temp);

	*head = (*head)->next;
	return (storage);

}
