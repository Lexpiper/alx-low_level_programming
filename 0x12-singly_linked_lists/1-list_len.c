#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to the given node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

