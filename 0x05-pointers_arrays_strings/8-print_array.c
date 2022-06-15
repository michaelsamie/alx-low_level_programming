#include "main.h"
#include <string.h>
/**
 * *print_array - check and print reverse
 * *@a: paramter
 * *@n: paramter
 * *Return: Always return nothing
 */
void print_array(int *a, int n)
{
	int length = sizeof(a[]) / sizeof(a[0]);

	printf("Elements of given array: \n");

	for (int n = 0; n <= 4; n++)
		printf("%d %s", a[n], ",");

}
