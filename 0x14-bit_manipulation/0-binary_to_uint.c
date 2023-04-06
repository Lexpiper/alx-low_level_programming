#include "lists.h"

/**
 *function that converts a binary number to an unsigned int
 *@b: pointing to a string
 *
 *
 *Return: the converted number.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len =strlen(b);
	unsigned int i;

	while (i < len)
	{
		if (b[i] == '0')
		{
			result = result << 1;
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}


	return (result);
}
