#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main- A program that print sentence in both lowercase
*and uppercase with new line
*Return: Always 0
*/
int main(void)
{
char ch;

for  (ch = 97; ch <= 122; ch++)
	putchar(ch);
for (ch = 65; ch <= 90; ch++)
	puchar(ch);
putchar(10);

return (0);
}

