#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- A program that print sentence in lowercase  and combine threee numbers
*Return: Always 0
*/
int main(void)
{
int m;
int n;
int t;
for  (m = 48; m <= 57; m++)
{
	for (n = 49; n <= 57; n++)
	{
		for (t = 50; t <= 57; t++)
		{
			if (n > m && t > n)
			{
				putchar(m);
				putchar(n);
				putchar(t);
				if (m != 55 || m != 56 || t != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
			
		}
	}		
}
putchar(10);

return (0);
}

