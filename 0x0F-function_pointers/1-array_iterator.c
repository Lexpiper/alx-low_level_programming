#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints individua elem in an array
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL && action == NULL)
		return;
	for (i = 0; i <= size; i++)
	{
		action(array[i]);
	}
}
