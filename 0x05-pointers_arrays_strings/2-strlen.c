#include <stdio.h>
#include "main.h"

/**
 * * _strlen - count and return lenght;
 * *@s: parameter
 * * Return: Always lenght of value.
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0' ; *s++)
	{
		len + = 1;
	}
	return (len);
}
