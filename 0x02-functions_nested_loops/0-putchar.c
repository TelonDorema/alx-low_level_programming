#include "main.h"

/**
 * main - print _putchar follwed by a new line
 *
 * Return: always 0
 *
 */

int main(void)
{
	int j;
	char c[] = "_putchar";

	for (j = 0; j <= 7; j++)
	{
		_putchar(c[j]);
	}
	_putchar('\n');

	return (0);
}
