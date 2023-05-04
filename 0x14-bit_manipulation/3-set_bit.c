#include "main.h"

/**
 *set_bit - sets value of a bit to 1 at given position
 *@n: points to the given number
 *@index: position given to set bit
 *
 *Return: 1 on success
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

