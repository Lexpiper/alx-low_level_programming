#include "main.h"
/**
*print_sign - computes the absolute value of an integer.
*@n: The number to be computed.
*Return: absolute value of number or zero
**/

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
