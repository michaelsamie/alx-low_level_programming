#include "main.h"
#include<string>
/**
 * *_strcat - check and print reverse
 * *@src: paramter
 * *@dest: paramter
 * *Return: a string
 */

char *_strcat(char *dest, char *src)
{
	strncat(dest, src);
	return (dest);
}

