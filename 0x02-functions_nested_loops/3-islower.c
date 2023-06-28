#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * Description: use _putchar to print
 * @c: collect alphabets
 *
 * Return: (1) if c is lower otherwise (0)
 *
 */

int _islower(int c)
{
	char j;
	int lower = 0;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j == c)
		{
		lower = 1;
		}
	}
	return (lower);
}
