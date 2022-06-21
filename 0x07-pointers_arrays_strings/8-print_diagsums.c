#include "main.h"
#include <stdio.h>

/**
 * * print_diagsums - two diagonals of square matrix
 * * @a: matrix
 * * @size: size
 * * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int b, suma = 0, sumb = 0;

	for (b = 0; b < size; b++)
	{
		suma += a[(size + 1) * b];
		sumb += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", suma, sumb);
}
