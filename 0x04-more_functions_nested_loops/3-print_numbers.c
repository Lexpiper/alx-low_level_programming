#include "main.h"
#include <stdio.h>

/**
*print_numbers - prints prints the numbers, from 0 to 9,
*followed by a new line
*
*Return: 0 0n success
**/

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	putchar(n + '0');
	}
	putchar('\n');
}
