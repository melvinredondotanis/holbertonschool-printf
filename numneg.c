#include "main.h"

/**
 * numneg - function that prints a negative number
 * @num: pointer to the number
 * @count: pointer to the count
 */
void numneg(int *num, int *count)
{
	_putchar('-');
	if (*num == INT_MIN)
	{
		_putchar('2');
		*num = 147483648;
		*count += 2;
	}
	else
	{
		*num = -(*num);
		*count += 1;
	}
}
