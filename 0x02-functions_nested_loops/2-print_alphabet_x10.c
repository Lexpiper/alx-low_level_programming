#include "main.h"
/**
*print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
*followed by a new line.
*Return: always 0
**/

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 9)
	{
		for (c = 'a'; a <= 'z'; c++)
		{
			_putchar(c);
		}
		putchar('\n');
		i++;
	}
}
