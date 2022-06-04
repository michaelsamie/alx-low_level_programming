#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- A program that print number less than ten with putchar
*Return: Always 0
*/
int main(void)
{
int n;
for  (n = 48; n < 58; n++)
	putchar(n);
putchar(10);
return (0);
}
