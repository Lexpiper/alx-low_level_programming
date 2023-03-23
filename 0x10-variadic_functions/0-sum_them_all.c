#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums
 * @n: count of arguments
 * 
 * Return: return 0 if n == o
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;

	unsigned int i;
	int result = 0;

	if (n == 0)
		return 0;
	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(sum, int);
	}

	va_end(sum);

	return (result);
}
