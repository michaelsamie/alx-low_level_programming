#include "main.h"

/**
 * * _strstr - check for substring
 * * @haystack: search string
 * * @needle: string find
 * * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int e = 0, p = 0;

	while (haystack[e])
	{
		while (needle[p])
		{
			if (haystack[e + p] != needle[p])
			{
				break;
			}

			p++;
		}

		if (needle[p] == '\0')
		{
			return (haystack + e);
		}

		e++;
	}

	return ('\0');
}
