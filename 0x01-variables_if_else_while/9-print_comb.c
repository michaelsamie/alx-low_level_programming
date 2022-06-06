#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- A program that print sentence in lowercase without q and e new line
*Return: Always 0
*/
int main(void)
{
char ch;
for (ch = 48; ch <= 57; ch++)
	putchar(ch);
if (ch != 57)
	putchar(44);
	putchar(32);
putchar(10);
return (0);
}

