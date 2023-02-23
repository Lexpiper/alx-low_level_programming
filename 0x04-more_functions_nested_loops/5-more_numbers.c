#include "main.h"
#include <stdio.h>

/**
*more_numbers - prints 10 times the number 0 - 14
*
*Return: 0 0n success
**/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j > 9)
	{
	putchar('0' + j / 10);
	}
	putchar('0' + j % 10);
	}
	putchar('\n');
	}
}
