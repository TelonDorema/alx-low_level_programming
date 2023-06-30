#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: to string
 * @src: from string
 * @n: number of bytes
 *
 * Return: Pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int length_of_string, j;
/* z is a counter for n byte of src to be concatenated */
/* length_of_string = length of destination string */

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length_of_string++)
	{
		dest[length_of_string] = src[j];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
