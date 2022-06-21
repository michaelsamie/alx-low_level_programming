#include "main.h"

/**
 * * print_chessboard - Print the chessboard
 * * @a: array of pieces
 * *Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int s, d;

	for (s = 0; s < 8; s++)
	{
		for (d = 0; c < 8; d++)
		{
			_putchar(a[s][d]);
		}

		_putchar('\n');
	}
}
