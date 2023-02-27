#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *rev_string - reverse the string
 *@s: string to be reversed
 */

void rev_string(char *s)
{
	int len = strlen(s);
	char temp;
	int i;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
