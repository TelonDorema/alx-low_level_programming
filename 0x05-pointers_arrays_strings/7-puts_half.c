#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string input
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int fs, hs;

	fs = 0;
	while (str[fs] != '\0')
		fs++;

	hs = fs / 2;

	if (fs % 2 == 1)
		hs++;

	while (hs < fs)
	{
		_putchar(str[hs]);
		hs++;
	}
	_putchar('\n');
}
