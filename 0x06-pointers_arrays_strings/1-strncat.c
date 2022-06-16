#include "main.h"
#include<string.h>
/**
 * *_strncat - check and print reverse
 * *@src: paramter
 * *@dest: paramter
 * *@n: paramter
 * *Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(*dest, *src, n);
	return (dest);
}

