#include <stdio.h>

/**
 * * main -> print argument
 * * @argc: parameter
 * * @argv: an array
 * * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
