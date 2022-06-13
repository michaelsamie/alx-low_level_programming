#include <stdio.h>
#include "main.h"

/**
 * * _strlen - count and return lenght;
 * *@s: parameter
 * * Return: Always lenght of value.
 */
int _strlen(char *s)
{
	int i;

	for (; *s != '\0' ; *s++)
	{
		i + = 1;
	}
	return (i);
}
