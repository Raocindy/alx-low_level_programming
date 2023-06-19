#include <stdio.h>

/**
 * add - adds multiple numbers
 * @lilac: num 1
 * @lily: num 2
 * Return: the sume of 2 number
 */

int add(int lilac, int lily)
{
	int total;

	total = lilac + lily;

	return (total);
}

/**
 * sub - substracts numbers
 * @lilac: num 1
 * @lily: num 2
 * Return: substraction of 2 numbers
 */

int sub(int lilac, int lily)
{
	return (lilac - lily);
}

/**
 * mul - multiplies 2 numbers
 * @lilac: num1
 * @lily: num 2
 * Return: multiplication of 2 numbers
 */

int mul(int lilac, int lily)
{
	int solution;
	
	solution = lilac * lily;

	return (solution);
}

/**
 * div - divides 2 numbers
 * @apple: num 1
 * @grape: num 2
 * Return: division of 2 numbers
 */

int div(int apple, int grape)
{
	return (apple / grape);
}

/**
 * mod - calculates the remainder
 * @apple: num 1
 * @grape: num 2
 * Return: remainder
 */

int mod(int apple, int grape)
{
	return (apple % grape);
}
