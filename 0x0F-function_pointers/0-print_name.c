#include "function_pointers.h"
/**
 * print_name - pointer function that calls another func
 * @name: charter to print
 * @f: funtion pointer
*/

void print_name(char *name, void (*f)(char *))
{
	/*Checks for strings passed into the pointer name and f*/
	if (!name || !f)
		return;
	(*f)(name);
}
