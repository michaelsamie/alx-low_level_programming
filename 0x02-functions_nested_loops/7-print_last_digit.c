#include "main.h"
/**
*print_last_digit - check for last number
*@n : parameter to deternmine return
*Return: return last number
*/
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
}
