#include "main.h"
/**
 * _abs - function that prints abs value of interger
 *
 * @a: parameter to be printed
 * Return: a
 */

int _abs(int a)
{
		if (a < 0)
			a = -(a);
		else if (a >= 0)
			a = a;
		return (a);
}
