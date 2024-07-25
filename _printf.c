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
	int x = 0;
	va_list args;

	format_t forms[] = {
		{'c', put_str},
		{'d', put_d},
		{'e', put_e},
		{'f', put_f},
		{'g', put_g},
		{'i', put_i},
		{'o', put_o},
		{'s', put_str},
		{'u', put_u},
		{'x', put_x},
		{'%', put_%},
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
		x++;
		i++;

	}
	va_end(args);
	return (x);
}
