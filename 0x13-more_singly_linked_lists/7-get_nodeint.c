#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of the listint_t list
 *@head: pointer to the linked list
 *@index: index of the node starting at zero
 *
 *Return: Nth node o the list
 *	or NULL if the  node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int pos = 0;

	while (pos < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		pos++;
	}

	return (head);
}

