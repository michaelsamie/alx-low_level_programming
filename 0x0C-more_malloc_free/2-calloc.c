#include "main.h"
#include <stdlib.h>

/**
 * * _calloc - Allocates memory for an array
 * * @n: The number of elements.
 * * @size: The byte size of each array element.
 * * Return: If n = 0, size = 0, or NULL
 */
void *_calloc(unsigned int n, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (n == 0 || size == 0)
		return (NULL);

	mem = malloc(size * n);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * n); index++)
		filler[index] = '\0';

	return (mem);
}
