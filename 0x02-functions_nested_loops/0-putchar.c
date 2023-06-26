#include "main.h"

/**
 * main - Printing putchar follwed by a new line
 *
 * Return: always 0
 *
 */

int main(void)
{
	int j;
	char c[] = "_putchar";

	for (j = 9; j > 1; j--)
	{
		_putchar(c[j]);
	}
	_putchar('\n');
	return (0);
}
