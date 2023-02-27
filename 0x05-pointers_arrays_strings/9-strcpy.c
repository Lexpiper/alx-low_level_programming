#include <stdio.h>
#include <string.h>

/**
 **string_copy - copies character
 *@dest: dest
 *@src: src
 *Return: result
 */

char *string_copy(char *dest, const char *src)
{
	char *result = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (result);
}
