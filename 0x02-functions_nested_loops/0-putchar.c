#include "main.h"

/**
 * main - Printing putchar follwed by a new line
 *
 * Return: always 0
 *
 */

int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i <= 3; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
