#include "main.h"

/**
 * numneg - function that prints a negative number
 * @numa: pointer to the number
 * @counta: pointer to the count
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
