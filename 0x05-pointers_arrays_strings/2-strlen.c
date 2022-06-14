#include "main.h"
#include <stdio.h>

/**
 * * _strlen -check and bring back lenght
 * *@s : paramter
 * * Return: Always return 1
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
