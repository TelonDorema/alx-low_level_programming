#include "main.h"

/**
 * _strlen: Function that returns the length of a string
 * @s: string to be tested
 *
 * Return: lenght
 */

int _strlen(char *s)
{
	int s_length = 0;

	while (s[s_length])
		s_length++;
	return (s_length);
}
