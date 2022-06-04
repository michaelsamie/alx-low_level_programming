#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- A program that print hexidecimal with lowercase number in lowercase
*Return: Always 0
*/
int main(void)
{
char ch;
for  (ch = 48; ch <= 57; ch++)
	putchar(ch);
for (ch = 97; ch <= 102; ch++)
	putchar(ch);
putchar(10);
return (0);
}

