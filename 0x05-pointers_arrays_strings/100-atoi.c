#include"main.h"
#include <limits.h>

/**
 *_atoi - converts string to integer
 *@s: string to be converted
 *Return: 0 on success
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;
	
	while (*s)
	{
	if (*s == '-')
	{
	sign = -1;
	}
	else if (*s == '+')
	{
	sign = 1;
	}
	else if (*s >= '0' && *s <= '9')
	{
	digit = *s - '0';
	if (result > (INT_MAX - digit) / 10)
	{
	break;
	}
	result = result * 10 + digit;
	}
	else if (result > 0)
	{
	break;
	}
	s++;
	}
	return result * sign;
}
