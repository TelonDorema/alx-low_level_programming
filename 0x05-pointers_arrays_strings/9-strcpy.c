#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 *
 * Return: 0
 *
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int k = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for ( ; k < j ; k++)
	{
		dest[k] = src[k];
	}
	dest[j] = '\0';
	return (dest);
}
