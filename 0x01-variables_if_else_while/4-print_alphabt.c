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

for  (ch = 97; ch <= 122; ch++)
	if (ch != 101 && ch != 113)
		putchar(ch);
putchar(10);

return (0);
}

