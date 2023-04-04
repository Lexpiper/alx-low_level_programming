#include "lists.h"
/**
 *pop_listint - delete the head node of a Listint_t
 *@head: pointer to the list
 *
 *Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
		return (0);

	temp = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}

