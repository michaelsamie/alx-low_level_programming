#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- A program that  assign a random number to the variable,
*and check the last digit  of the random number
*Return: Always 0
*/
int main(void)
{
int n;
int ld = n % 10;

srand(time(0));

n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
	printf("Last digit of %d is %d and is less than 5\n", n, ld);
else if (n % 10 == 0)
	printf(" Last digit of %d  is %d equal 0\n", n, ld);
else if (n % 10 < 6 || n % 10 != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
return (0);
}

