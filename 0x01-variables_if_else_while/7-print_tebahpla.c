#include <stdio.h>

/**
 * main - print alphabets in reverse
 *
 * Return: always 0
 *
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
