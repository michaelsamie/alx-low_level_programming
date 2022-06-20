#include "main.h"
#include <string.h>

/**
 * * _memcpy -check and print half
 * *@dest : destination memory
 * *@src : source memory
 * *@n : interger
 * * Return:  a string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
