#include "main.h"

/**
 * print_alphabet_x10 - function that prints ten times the alphabet
 *
 * Description: printing with _putchar
 *
 * Return: 0
 *
 */

void print_alphabet_x10(void)
{
	char p;
	int k;

	for (k = 0; k < 10; k++)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
	}
}
