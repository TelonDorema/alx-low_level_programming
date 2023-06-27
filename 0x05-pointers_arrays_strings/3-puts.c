#include "main.h"

/**
 * _puts - Prints a string followed by new line
 * @str: string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar ('\n');
}
