#include "main.h"

/**
 * times_table -  prints the 9 times table
 *
 * Description: output followed by 2 spaces
 *
 */

void times_table(void)
{
	int m, n, j;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (n = 1; n <= 9; n++)
		{
			j = (m * n);

			if ((j / 10) > 0)
			{
				_putchar((j / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
				_putchar((j % 10) + '0');
			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
