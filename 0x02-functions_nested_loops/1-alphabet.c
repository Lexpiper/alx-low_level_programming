#include "main.h"

/**
*print_alphabet - Prints the alphabet in lowercase, followed by a new line.
*
* Return: always 0
**/
void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
	_putchar(az);
	}
	_putchar('\n');
}
