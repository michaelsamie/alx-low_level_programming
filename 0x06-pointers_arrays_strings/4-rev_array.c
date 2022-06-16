#include "main.h"
/**
 * *reverse_array - check and print reverse
 * *@a: paramter
 * *@n: paramter
 * *Return: a string
 */

void reverse_array(int *a, int n)
{
	int *point, i;
	int temp, k;

	point = a;

	for (i = 0; i < n; i++)
		point++;
	for (k = 0; k < i / 2; k++)
	{
		temp = a[k];
		a[k] = *point;
		*point = temp;
		point--;
	}
}
