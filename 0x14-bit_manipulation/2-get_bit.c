#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to get the bit from
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	/* Check if index is out of bounds */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Shift the 1 to the left by index bits */
	mask = 1UL << index;

	/* Use the bitwise AND operator to check the value of the bit at index */
	return ((n & mask) != 0);
}
