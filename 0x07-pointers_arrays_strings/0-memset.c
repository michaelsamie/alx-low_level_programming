#include "main.h"
#include <string.h>

/**
 * *_memset - check and print half
 * *@s : string
 * *@b : character
 * *@n : interger
 * * Return:  a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
