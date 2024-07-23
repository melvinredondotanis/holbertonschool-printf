#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format_spec - struct for format specifiers
 * @spec: format specifier
 * @func: function pointer to the function that prints the specifier
 */

typedef struct format_spec
{
	char spec;
	void (*func)(va_list);
} format_spec;

int put_s(va_list args);
int put_d(va_list args);
int put_i(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
