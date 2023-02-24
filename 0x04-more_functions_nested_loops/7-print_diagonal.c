#include "main.h"
#include <stdio.h>

/**
* print_diagonal - prints a diagonal line of backslashes
* @n: the number of backslashes to print
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	putchar('\n');
	return;
	}

	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
	putchar(' ');
	}
	putchar('\\');
	putchar('\n');
	}
}
