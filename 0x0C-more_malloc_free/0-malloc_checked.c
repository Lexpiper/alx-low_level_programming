#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - returs pointer
 * @b: number of bytes to be aocated
 * Return: a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
