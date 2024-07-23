#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: string to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i;
	va_list args;

	if (!*format)
		return (0);

	va_star(args, format);

	return (0);
}
