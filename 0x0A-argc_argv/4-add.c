#include <stdio.h>
#include <stdlib.h>

/**
 * * main -> multiples two number
 * * @argc: parameter
 * * @argv: an array
 * * Return: 0
 */
int main(int argc, char *argv[])
{
	int answer = 0, n, i, j, k;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}

		}
	}

	for (k = 1; k < argc; k++)
	{
		n = atoi(argv[k]);
		answer += n;
	}
	printf("%d\n", answer);
	return (0);
}
