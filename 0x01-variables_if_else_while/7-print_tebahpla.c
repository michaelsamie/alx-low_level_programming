#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- A program that print sentence in lowercase in reverse
*Return: Always 0
*/
int main(void)
{
char ch;

for  (ch = 122; ch >= 97; ch--)
	putchar(ch);
putchar(10);

return (0);
}

