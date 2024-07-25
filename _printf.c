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
	char tmp;
	va_list args;

	format_spec forms[] = {	{'c', put_c}, {'s', put_s},
		{'d', put_d}, {'i', put_d}, {'b', put_b}, {'%', put_prct}, {'\0', NULL}};

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && !format[i + 1])
			return (-1);
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
