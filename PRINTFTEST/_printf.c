#include "main.h"

/**
*
*
*
*
*/

int _printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	va_list args;

	format_t forms[] = {
		{'d', put_d},
		{'s', put_str},
		{'c', put_str},
		{'i', put_d},
		{'\0', NULL}
	};

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
