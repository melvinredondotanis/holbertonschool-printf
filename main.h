#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct
{
	char spec;
	void (*func)(va_list *args);
} format_spec;

int put_c(va_list *args);
int put_s(va_list *args);
int put_d(va_list *args);
int put_i(va_list *args);
int put_prct(va_list *args);

int _printf(const char *format, ...);

#endif
