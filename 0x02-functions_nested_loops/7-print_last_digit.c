#include "main.h"
/**
 * print_last_digit - function that printd thr last digit
 *
 * @i: parameter to be printed
 *
 * Return: k
 *
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	return (k);

}
