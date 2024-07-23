#include "main.h"

/**
 * _printf - function that prints a formatted string
 * @format: string to print
 * Return: number of characters printed
 * Description: This function prints a formatted string
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	va_list args;

	format_spec forms[] = {
		{'d', put_d},
		{'s', put_s},
		{'c', put_s},
		{'i', put_i},
		{'\0', NULL}};

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			for (; forms[j].f; j++)
			{
				if (forms[j].f == format[i])
				{
					forms[j].form(args);
					break;
				}
			}
		}
		else
			putchar(format[i]);
		i++;

	}
	va_end(args);
	return (0);
}
