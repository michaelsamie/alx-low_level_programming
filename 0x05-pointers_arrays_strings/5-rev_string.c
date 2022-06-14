#include "main.h"
#include <stdio.h>

/**
 * *rev_string -check and print reverse
 * *@s : paramter
 * * Return: Always return 1
 */
void rev_string(char *s)
{
	int i, temp1, temp2;
	char temp3;

	temp1 = 0;
	temp2 = 0;

	while (s[temp1] != '\0')
		temp1++;
	temp2 = temp1 - 1;
	for (i = 0; i < temp1 / 2; i++)
	{
		temp3 = s[i];
		s[i] = s[temp2];
		s[temp2] = temp3;
		temp2 -= 1;
	}
}
