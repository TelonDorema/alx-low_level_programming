#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: to string pointer
 * @src: from string pointer
 *
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int length_of_string, h;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (h = 0; src[h] != '\0'; h++, length_of_string++)
	{
		dest[length_of_string] = src[h];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
