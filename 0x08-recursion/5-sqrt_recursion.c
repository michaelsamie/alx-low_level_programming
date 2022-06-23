#include "main.h"

int _sqrt(int, int);

/**
 * * _sqrt_recursion -> sqrt  recursion
 * * @n: parameter
 * * Return: squared number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

