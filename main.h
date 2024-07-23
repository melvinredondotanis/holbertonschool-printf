#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct
{
	char f;
	void (*form)(va_list);
} format_t;

int put_c(va_list *args);
int put_s(va_list *args);
int put_d(va_list *args);
int put_i(va_list *args);
int put_prct(va_list *args);

int _printf(const char *format, ...);

#endif
