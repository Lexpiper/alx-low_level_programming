#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: pointer to the given number
 *@index: position of the bit to be cleared
 *
 *Return: 1 if successful and -1 if unsuccessful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	long int bit;

	if ((n == NULL) && (index > 32))
	{
		return (-1);
	}

	bit = 1 << index;
	*n = *n & ~bit;

	return (1);
}

