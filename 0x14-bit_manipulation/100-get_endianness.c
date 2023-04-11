#include "main.h"

/**
 *get_endianness - checks for endianness size of a pc
 *
 *Return:0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 0;

	if ((i >> 31) == 1)	
		return (0);
	else
		return (1);
}
 
