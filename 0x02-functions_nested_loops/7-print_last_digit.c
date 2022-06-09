#include "main.h"
/**
*print_last_digit - check for last number
*@n : parameter to deternmine return
*Return: return last number
*/
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	_putchar('\n');
	return (x);
}
