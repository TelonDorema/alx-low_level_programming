#include "main.h"

/**
 * print_last_digit - last digit of a number
 *
 * Description:_putchar to print
 * @r: integer
 *
 * Rerurn: last digit of r
 */
 
int print_last_digit(int r)
{
	int h;

	if (r < 0)
	{
		h = -1 * (r % 10);
	}
	else
	{
		h = r % 10;
	}
	_putchar((h % 10) + '0');
	return (h % 10);
}
