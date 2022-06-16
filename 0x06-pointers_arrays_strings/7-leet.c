#include "main.h"
/**
 * *leet - check and print
 * *@s: paramter
 * *Return: a string
 */

char *leet(char *s)
{
	int a = 0,  c, p = 5;
	char tr[5] = { 'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		c = 0;
		while (c < p)
		{
			if (s[a] == tr[c] || s[a] - 32 == tr[c])
				x[a] = trw[c];
		}
		c++

	}
	a++
		return (s);
}
