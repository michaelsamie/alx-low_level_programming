#include "main.h"
/**
 * *more_numbers - print numbers and  return void
 * **/
void more_numbers(void)
{
	int n, j;


	for (n = 0; n < 15; n++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j  + '0');
		}
		_putchar('\n');
	}

}
