#include "main.h"

/**
 *print_binary - prints the binary representation of an integer
 *@n:integer to be converted.
 *
 *
 */

void print_binary(unsigned long int n)
{
	int i,j;
	int leadingZero = 1;

	if (n == 0)
	{
		printf("0\n");
		return;
	}

	/*iterate over each byte*/
	for  (i = sizeof(unsigned long int) - 1; i >=0; i--)
	{
		unsigned char byte = (n >> (i * 8)) & 0xff;
		for (j = 7; j >- 0; j--)
		{
			char bit = (byte >> j) & i;
			printf("%u",bit);
		}
		printf("\n");

		if ((leadingZero & byte) == 0)
			continue;

		leadingZero = 0;
	}

}	

