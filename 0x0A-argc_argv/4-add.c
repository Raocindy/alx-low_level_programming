#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: int argument
 * @argv: char pointer argument.
 *
 * Description: adds positive numbers.
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int a, n, result;

	result = 0;

	for (a = 1; a < argc; a++)
	{
		for (n = 0; argv[a][n] != '\0'; n++)
		{
			if (argv[a][n] < 47 || argv[a][n] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		result = result + atoi(argv[a]);
	}
	printf("%d\n", result);

	return (0);
}
