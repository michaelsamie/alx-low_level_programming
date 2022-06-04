#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- A program that print possible cobination of number separated by comma
*Return: Always 0
*/
int main(void)
{
int n;
for  (n = 48; n < 57; n++)
	if (n != 57)
		putchar(44);
		putchar(32);
	putchar(n);
putchar(10);
return (0);
}
