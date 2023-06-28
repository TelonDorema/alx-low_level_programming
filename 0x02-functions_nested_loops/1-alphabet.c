#include "main.h"

/**
 * print_alphabet- print lowercase alphabet
 *
 */

void print_alphabet(void)
{
	char ph;

	ph = 'a';
	while (ph <= 't')
	{
		_putchar(ph);
		ph++;
	}
	_putchar('\n');
}
