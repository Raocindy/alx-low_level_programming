#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char emmanuel;
	int e;

	e = 0;

	while (e < 10)
	{
		emmanuel = 'a';
		while (emmanuel <= 'z')
		{
			_putchar(emmanuel);
			emmanuel++;
		}
		_putchar('\n');
		e++;
	}
}
