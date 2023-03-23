#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums
 * @n: count of arguments
 * ... :  A variable number of parameters to calulate the sum of
 * Return: return 0 if n == o
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return 0;

	va_list sum;
	unsigned int i, result = 0;

	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(sum, int);
	}

	va_end(sum);

	return (result);
}