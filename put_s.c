#include "main.h"

/**
 * put_s - function that prints a string
 * @args: arguments to print
 * Return: number of characters printed
 */
int put_s(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
