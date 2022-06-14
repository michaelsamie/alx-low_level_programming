#include "main.h"
#include <string.h>

/**
 * * puts_half -check and print half
 * *@str : paramter
 * * Return: Always return 1
 */
void puts_half(char *str);
{
	int i, temp1, temp2;

	temp1 = strlen(str);
	if (temp1 % 2 == 1)
	{
		temp2 = temp1 / 2 + 1;
	}
	else
	{
		temp2 = temp1 / 2;
	}
	for (i = temp2; i < temp1; i++)
	{
		_putchar(str[i])
	}
	_putchar('\n');
}

