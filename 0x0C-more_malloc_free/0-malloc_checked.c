#include "main.h"
#include <stdlib.h>

/**
 * * malloc_checked - Allocates  malloc.
 * * @c: The number of bytes to be allocated.
 * * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int c)
{
	void *mem = malloc(c);

	if (mem == NULL)
		exit(98);

	return (mem);
}
