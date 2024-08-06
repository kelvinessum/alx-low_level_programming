#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listin_t list.
 * @head: pointer to the head of linked list.
 * No return.
 */

void free_listint(listint_t *head)
{

	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
