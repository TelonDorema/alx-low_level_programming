#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @t: to string
 *
 * Return: uppercase string
 */

char *string_toupper(char *t)
{
	int length_of_string;

	length_of_string = 0;

	while (t[length_of_string] != '\0')
	{
		if (t[length_of_string] >= 97 && t[length_of_string] <= 122)
		{
			t[length_of_string] = t[length_of_string] - 32;
		}
		length_of_string++;
	}
	return (t);
}
