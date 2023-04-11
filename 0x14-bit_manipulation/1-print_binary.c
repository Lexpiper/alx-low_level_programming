#include "main.h"

/**
 *print_binary - prints the binary representation of an integer
 *@n:integer to be converted.
 *
 *
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}

