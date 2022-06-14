#include "main.h"
#include <stdio.h>

/**
*print_rev - check and print reverse
*@s: paramter
*Return: Always return 1
*/
void print_rev(char *s)
{
	int i, x;
	int x = 0;

	while (s[x] != '\0')
		x++;
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

