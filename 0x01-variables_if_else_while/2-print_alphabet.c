#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- A program that print sentence in lowercase with new line
*Return: Always 0
*/
int main(void)
{
char ch;

for  (ch = 97; ch <= 122; ch++)
	putchar(ch);
putchar(10"\n");

return (0);
}

