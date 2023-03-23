#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - print numbers followed by a new line
 * @n: number of integers passed to function
 * @separator: is the string to be printed between numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;

	unsigned int i;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, int));
		if (i !=n - 1  && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf('\n');

	va_end(print);
}