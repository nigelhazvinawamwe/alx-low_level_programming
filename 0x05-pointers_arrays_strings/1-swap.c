#include "main.h"

/**
 * swap_int - swap values
 *
 * @a: parameter a
 * @b: parameter b
 *
 * Return: 0
 *
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
