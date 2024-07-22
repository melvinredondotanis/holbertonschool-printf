#include "main.h"

/**
 * count_args - function that counts the number of special characters in a string.
 * @format: string to count
 * Return: number of special characters
 */
int count_args(const char *format)
{
	int args = 0, i = 0, j;
	char special_characters[10] = {'c', 'd', 'e', 'f', 'g', 'i', 'o', 's', 'u', 'x'};

	while (format[i])
	{
		if (format[i] == '%' && i > 0 && format[i - 1] == '\\')
		{
			i++;
			continue;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			i += 2;
			continue;
		}
		else if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 10; j++)
			{
				if (format[i] == special_characters[j])
				{
					args++;
					break;
				}
			}
		}
		else
			i++;
	}
	return args;
}

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
