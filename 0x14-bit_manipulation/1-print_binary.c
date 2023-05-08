#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary form
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	/* Find the most significant bit in n */
	while ((mask << 1) <= n)
		mask <<= 1;

	/* Print the binary representation of n */
	while (mask != 0)
	{
		if ((n & mask) == 0)
			putchar('0');
		else
			putchar('1');
		mask >>= 1;
	}
}
