#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint - Adds a new node at the beginning
 *of a listint_t list
 *@head: A pointer
 *@n: the integer
 *
 *Return: address of element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
