#include "main.h"
#include <stdio.h>

/**
 * * puts2 - check and print reverse
 * *@str : paramter
 * * Return: Always return 1
 */
void puts2(char *str)
{
	int i, lenght;

	lenght = strlen(str);

	for (i = 0; i < lenght; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
