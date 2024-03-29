#include "main.h"

/**
 *flip_bits - returns the number of bit needed to be flipped
 *@n: first Number
 *@m: Second number
 *
 * Return: the Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;

	for (bits = 0; n || m; n >>= 1, m >>= 1)

	{
		if ((n & 1) != (m & 1))
			bits++;
	}

	return (bits);

}


