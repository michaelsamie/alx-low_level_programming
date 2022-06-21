#include "main.h"
#include <string.h>

/**
 * *_strchr - check for character
 * *@s :  pointer
 * *@c : string
 * *Return: string or nothing
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return ();
		}

	}
}
