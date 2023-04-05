#include "lists.h"

/**
 *insert_nodeint_at_index -  inserts a new node at a given position
 *@head: pointer to the linked list
 *@idx: index of the list where the new node should be added
 *@n: the value of the node
 *Return: Address of the new node
 *		or NULL if the list is empty
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nodes = 0;
	listint_t *node_index = *head;
	listint_t *new_node, *node_after;

	if (head == NULL)
		return (NULL);

	while (node_index != NULL)
	{
		node_index = node_index->next;
		nodes++;
	}

	if (idx > (nodes + 1))
		return (NULL);

	node_index = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		node_after = *head;
		nodes = 0;
		while (nodes < (idx - 1))
		{
			node_index = node_index->next;
			nodes++;
		}
		nodes = 0;
		while (nodes < idx)
		{
			node_after = node_after->next;
			nodes++;
		}
		node_index->next = new_node;
		new_node->next = node_after;
		return (new_node);
	}
}

