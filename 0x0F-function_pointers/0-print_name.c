/**
 * print_name - pointer function that calls another func
 * @name: charter to print
 * @f: funtion pointer
*/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
