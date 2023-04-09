#include "main.h"
#include <stddef.h>

/**
 *set_bit - sets the value of a bit to 1 at given position
 *@n: pointer to the give number
 *@index: positon given to  set bit
 *
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if ((n == NULL) && (index > 32))
	{
		return (-1);
	}

	bit = 1 << index;
	*n = *n | bit;

	return (1);
}

