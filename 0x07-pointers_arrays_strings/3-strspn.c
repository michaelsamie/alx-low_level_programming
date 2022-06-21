#include "main.h"
/**
*_strspn - check string lenght
* @s: source string
* * @accept: accepted string
* * Return: number of bytes in the init segment
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, p = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				p++;
			}

			b++;
		}

		a++;
	}

	return (p);
}
