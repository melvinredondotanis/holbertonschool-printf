#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct format_spec - struct for format specifiers
 * @spec: format specifier
 * @form: function pointer to the function that prints the specifier
 */
typedef struct format_spec
{
	char spec;
	int (*form)(va_list);
} format_spec;

char check_format(char format);
int put_c(va_list args);
int put_s(va_list args);
int put_d(va_list args);
int put_i(va_list args);
int put_b(va_list args);
int put_prct(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
void numneg(int *numa, int *counta);

#endif
