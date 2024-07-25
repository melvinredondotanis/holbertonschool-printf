#include "main.h"

/**
 * put_b - function that prints a binary number
 * @args: arguments to print
 * Return: number of characters printed
 */
int put_b(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i = 0, j = 0, count = 0;
	int binary[32];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		count += _printf("%d", binary[j]);

	return (count);
}
