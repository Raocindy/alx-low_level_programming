#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: prints the number of arguments passed into it.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /*Ignore argv*/
	argc--;
	printf("%d\n", argc);
	return (0);

}
