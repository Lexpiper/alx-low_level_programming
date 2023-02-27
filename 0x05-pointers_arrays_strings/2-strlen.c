#include "main.h"

/**
 *_strlen - checks the lenght of a string
 *@s: string to be checked
 *Return: legnth of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}
