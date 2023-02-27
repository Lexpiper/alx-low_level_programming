#include "main.h"

/**
 *swap_int - function swaps value of two integers
 *@a: first value
 *@b: second value
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
