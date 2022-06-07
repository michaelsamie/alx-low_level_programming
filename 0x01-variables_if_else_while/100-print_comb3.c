#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- A program that print sentence in lowercase  and combine two numbers
*Return: Always 0
*/
int main(void)
{
int m;
int n;
for  (m = 48; m <= 57; m++)
{
	for (n = 49; n <= 57; n++)
	{
		if (n > m)
		{
			putchar(m);
			putchar(n);
			if (n != 57 || m != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
}
putchar(10);

return (0);
}

