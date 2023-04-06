#include "main.h"
/**
 * _puts_recursion - functions similary like puts();
 * @s: parameter
 * Return: Always 0 (Shows success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
