#include "main.h"
#include <limits.h>

/**
 * put_d - function that prints a decimal number
 * @args: arguments to print
 * Return: number of characters printed
 */
void numneg(int *numa, int *counta)
{
	_putchar('-');
	if (*numa == INT_MIN)
	{
		_putchar('2');
		*numa = 147483648;
		counta += 2;
	}
	else
	{
		*numa = -(*numa);
		counta++;
	}
}
