#include <main.h>
/**
 * positive_or_negative - ufunctions that prints negative or potive number
 *
 * @i: parameter to be printed
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negetive\n", i);
	else
		printf("%d is positive\n", i);

}
