#include <stdarg.h>
#include <stdio.h>


/**
 * *sum_them_all - check the code
 * *@n : paramter
 * * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	va_start(list, n);
	int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)

		sum += va_arg(list, unsigned int);
	va_end(list);

	return (sum);

}

