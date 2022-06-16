#include "main.h"
#include<string.h>
/**
 * *_strncpy - check and print reverse
 * *@src: paramter
 * *@dest: paramter
 * *@n: paramter
 * *Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

