#include "main.h"
/**
*print_to_98 - sum two numbers
*@n : parameter to deternmin sum
*Return: Always 0
*/
void print_to_98(int n)
{
	char p;

	if (n >= 0)
	{
		for (p = n; p <= 98; p++)
		{
			_putchar(p);
			_putchar(',');
		}
	}

}
