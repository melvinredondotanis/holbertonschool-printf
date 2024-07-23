#include "main.h"

/**
 * _printf - function that prints a formatted string
 * @format: string to print
 * Return: number of characters printed
 * Description: This function prints a formatted string
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, count = 0;

	va_list args;

	format_spec forms[] = {
		{'d', put_d},
		{'s', put_s},
		{'c', put_c},
		{'\0', NULL}};

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '\\' && format[i + 1] == '%')
		{
			_putchar('\\');
			_putchar('%');
			count += 2;
			i += 2;
			continue;
		}
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				count++;
				i++;
				continue;
			}
			for (j = 0; forms[j].spec; j++)
			{
				if (format[i] == forms[j].spec)
				{
					count += forms[j].form(args);
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	return (count);
}
