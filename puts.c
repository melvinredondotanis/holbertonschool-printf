#include "main.h"

/**
 * put_s - function that prints a string
 * @args: arguments to print
 * Return: number of characters printed
 */
int put_s(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}

/**
 * put_d - function that prints a decimal number
 * @args: arguments to print
 * Return: number of characters printed
 */
int put_d(va_list args)
{
	int i = 0, count = 0, num_digits = 0, digit = 0, temp = 0;
	int divisor = 1;
	int num = va_arg(args, int);

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		temp = num;

		while (temp != 0)
		{
			temp /= 10;
			num_digits++;
		}

		for (i = 1; i < num_digits; i++)
			divisor *= 10;

		while (divisor != 0)
		{
			digit = num / divisor;
			_putchar(digit + '0');
			num %= divisor;
			divisor /= 10;
			count++;
		}
	}

	return (count);
}

/*int put_i(va_list args)
{
	return (0);
}*/