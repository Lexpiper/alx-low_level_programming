#include "main.h"
#include <stdio.h>

/**
*print_line - draws a straight in terminal
*@n: integer print.
*Return: 0 0n success
**/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	putchar('\n');
	return;
	}
	for (i = 0; i < n; i++)
	{
	putchar('_');
	}
	putchar('\n');
}
