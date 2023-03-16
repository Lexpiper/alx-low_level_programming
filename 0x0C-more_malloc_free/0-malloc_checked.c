#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - returs pointer
 * @b: interger
 * @ptr: void pointer
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