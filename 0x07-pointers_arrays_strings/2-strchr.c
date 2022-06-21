#include "main.h"
#include <string.h>

/**
 * *_strchr - check and print half
 * *@s : string
 * *@c : char
 * * Return: a string
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b < a;  b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\n');
}
