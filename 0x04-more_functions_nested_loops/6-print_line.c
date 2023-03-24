#include "main.h"

/**
 * print_line - draws a line
 * @n: number or times printed
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
