#include "main.h"


/**
 *get_bit - functions gets the value of a bit at given index
 *@n: int given  to set bit
 *@index: position of bit
 *
 * Return: returns value of bit at index
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if ((n == 0) && (index > 32))
		return (-1);

	bit = n >> index;
	return (bit & 1);
}

