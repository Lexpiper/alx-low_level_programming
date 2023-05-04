#include "main.h"

/**
 *binary_to_uint - converts a binary number to unsigned int
 *@b: points to a string
 *Return: the number converted
 */

unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int res = 0;

	len = strlen(b);

	if (b == NULL)
		return (0);

	for (i = 0; i < len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		res = (res << 1) | (b[i] - '0');
	}
	return (res);
}

