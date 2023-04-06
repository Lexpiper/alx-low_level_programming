#include "lists.h"

/**
 *delete_nodeint_at_index - deletes a index at a give index
 *@index: index of the node to be deleted
 *@head: pointer to the linked list
 *
 * Return: 1 if successful and -1 if failed.
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nextnode;
	unsigned int count = 1;
	temp = *head;

	if (*head == NULL)
		return (-1);

	while (count < (index - 1))
	{
		temp = temp->next;
		count++;	
	}
	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);

	return (1);
}
