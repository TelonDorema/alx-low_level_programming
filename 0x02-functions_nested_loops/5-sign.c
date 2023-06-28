#include "main.h"

/**
 * print_sign - print sign of a value
 *
 * Description: use n with condition
 * @n: value
 *
 * Return: (0) or (1) depends
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (48);
	}
}
