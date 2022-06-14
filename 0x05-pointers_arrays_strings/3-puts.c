#include "main.h"

/**
 * * _puts - print on screen;
 * *@str: parameter
 * * Return: Always lenght of value.
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar ('\n');
}

