#include "main.h"
/**
*print_sign - check for lower case c
*@n : argument to deternmine return
*Return: return 1 and 0 and -1 depending on condintion.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
