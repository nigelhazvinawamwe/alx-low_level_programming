#include "main.h"
/**
 * print_sign - function that prints sign
 *
 * @n: parameter to be printed
 *
 * Return: 1 if its greater than zero
 * and returns -1 otherwise
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);

	}
}
