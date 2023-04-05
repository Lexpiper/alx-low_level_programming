#include "lists.h"

/**
 *sum_listint - sums all the data (n) of a listint_t linked list.
 *@head: pointer to a linked list
 *
 * Return: Sum of all the data in the listint_t linked list
 *		or NULL if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (temp)
		{
			sum += temp->n;
			temp = temp->next;
		}

	}
	return (sum);
}

