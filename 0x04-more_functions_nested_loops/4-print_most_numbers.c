#include "main.h"
/**
 * *print_numbers - print numbers and  return void
 */
void print_numbers(void)
{
	int n;


	for  (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');

		}

	}
	_putchar('\n');

}
