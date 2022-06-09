#include "main.h"
/**
*print_to_98 - sum two numbers
*@n : parameter to deternmin sum
*Return: Always 0
*/
void print_to_98(int n)
{
	if (n >= 0)
	{
		for (n >= 0; n <= 98; n++)
		{
			_putchar(n);
			_putchar(',');
		}
	}

}
