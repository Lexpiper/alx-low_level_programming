#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointing to a string
 *
 *
 *Return: the converted number.
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i, len;

	len = strlen(b);

	if (b == NULL)
		return (0);

	for (i = 0; i < len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		result = (result << 1) | (b[i] - '0');
	}
	return (result);
}
