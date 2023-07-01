#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: to first string
 * @s2: to second string
 *
 * Return: value < 0 if string is < the other,
 * value > 0 if string is > the other & 0 if string are equal
 *
 */

int _strcmp(char *s1, char *s2)
{
	int counter, compare_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	compare_value = s1[counter] - s2[counter];
	return (compare_value);
}
