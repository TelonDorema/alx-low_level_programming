#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: swap integer
 * @b: swap integer
 *
 * Retun: always 0
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *b;
	*b = *a;
	*a = j;
}
