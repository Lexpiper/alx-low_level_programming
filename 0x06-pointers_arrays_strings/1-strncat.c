#include <string.h>

/**
 *_strncat - concantenate two strings
 *@dest: destination
 *@n: integer
 *@src: source
 *Return: 0 on success
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	ptr[i] = src[i];
	}
	ptr[i] = '\0';
	return (dest);
}
