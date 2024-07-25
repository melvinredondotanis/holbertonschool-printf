#include "main.h"

/**
 * put_c - function that prints a character
 * @args: arguments to print
 * Return: number of characters printed
 */
int put_c(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
