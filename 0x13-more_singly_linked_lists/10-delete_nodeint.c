#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to the head of the list
 * @index: index of the node to be added
 *
 * Return: the address of the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1 = NULL;
	listint_t *temp2 = NULL;
	unsigned int i = 0;
	unsigned int list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (i == index)
		{
			temp1 = *head;
			if (i == 0)
			{
				*head = temp1->next;
				free(temp1);
				return (1);
			}
			temp2->next = temp1->next;
			free(temp1);
			return (1);
		}
		else if ((i + 1) == index)
			temp2 = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}
