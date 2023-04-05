#include "lists.h"

/**
 *insert_nodeint_nodeint_at_index -  inserts a new node at a given position
 *@head: pointer to the linked list
 *@idx: index of the list where the new node should be added
 *@n: the value of the node
 *Return: Address of the new node
 *		or NULL if the list is empty
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;

	unsigned int count = 1;
	
	temp = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		if (idx > count)
			return (NULL);

		newnode = (listint_t *)malloc(sizeof(listint_t));
		newnode->n = n;

		while (count < idx)
		{
			temp = temp->next;
			count++;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}

