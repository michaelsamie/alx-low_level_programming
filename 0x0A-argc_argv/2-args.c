#include <stdio.h>
#include <stdlib.h>

/**
 * * main -> function arguments it receives.
 * * @argc: parameter
 * * @argv: an array
 * * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, j, answer = 0;
	int spill[] = {15, 7, 8, 3, 2};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && n >= 0; j++)
	{
		while (n >= spill[j])
		{
			n -= spill[j];
			answer++;
		}
	}
	printf("%d\n", answer);
	return (0);
}
