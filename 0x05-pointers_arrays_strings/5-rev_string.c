#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: reverse output
 *
 * Return: 0
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int j;

	while (s[counter] != '\0')
		counter++;
	for (j = 0; j < counter; j++)
	{
		counter--;
		rev = s[j];
		s[j] = s[counter];
		s[counter] = rev;
	}

}
