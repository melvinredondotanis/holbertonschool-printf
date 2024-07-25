#include "main.h"

/**
 * check_format - function that checks if a character is a format specifier
 * @format: character to check
 * Return: format specifier or 0 if not found
 */
char check_format(char format)
{
	int i;
	char types[5] = {'c', 's', 'd', 'i', 'b'};

	for (i = 0; i < 5; i++)
	{
		if (format == types[i])
			return (types[i]);
	}
	return (0);
}

/**
 * _printf - function that prints a formatted string
 * @format: string to print
 * Return: number of characters printed
 * Description: This function prints a formatted string
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, count = 0;
	char tmp;
	va_list args;

	format_spec forms[] = {{'c', put_c}, {'s', put_s}, {'d', put_d}, {'i', put_d}, {'b', put_b}, {'\0', NULL}};

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			tmp = check_format(format[i + 1]);
			if (tmp)
			{
				i++;
				for (j = 0; forms[j].spec; j++)
					if (tmp == forms[j].spec)
					{
						count += forms[j].form(args);
						break;
					}
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
