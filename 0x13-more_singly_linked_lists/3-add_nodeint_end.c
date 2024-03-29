#include "lists.h"

/**
 *add_nodeint_end - Adds node to end of linked list
 *@head: points to the linked list
 *@n: integer to be added to new node
 *
 *Return: Address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		temp = *head;
		while (temp->next != NULL)
		temp = temp->next;

		temp->next = new_node;
	}

	return (new_node);
}

