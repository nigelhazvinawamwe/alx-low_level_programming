#include "main.h"

/**
 * puts2 -  prints every other character of a string
 *
 * @str: parameter
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	for (i = -1 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
