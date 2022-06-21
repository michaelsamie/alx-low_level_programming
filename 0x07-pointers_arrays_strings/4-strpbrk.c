#include "main.h"

/**
 * * _strpbrk - check string for  set of bytes
 * * @s: string source
 * * @accept: characters accept
 * * Return: the string since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, p;

	while (s[a])
	{
		p = 0;

		while (accept[p])
		{
			if (s[a] == accept[p])
			{
				s += a;
				return (s);
			}

			p++;
		}

		a++;
	}

	return ('\0');
}

