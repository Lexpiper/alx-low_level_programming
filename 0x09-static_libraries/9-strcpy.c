#include <stdio.h>
#include <string.h>

/**
 *_strcpy - copies character
 *@dest: dest
 *@src: src
 *Return: result
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
