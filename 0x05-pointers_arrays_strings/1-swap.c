#include <stdio.h>
#include "main.h"

/**
 * * swap_int - a function to update n;
 * *@first_num: parameter 1
 * *@second_num: parameter 2
 * * Return: Always nothing.
 */
void swap_int(int *first_num, int *second_num)
{
	int temp;

	temp = *first_num;
	*first_num = *second_num;
	*second_num = temp;
}
