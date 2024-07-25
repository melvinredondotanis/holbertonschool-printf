#include "main.h"

/**
*
*
*
*
*/

void put_str(va_list args)
{
	char *str = va_arg(args, char *);

	while (*str)
	{
		putchar(*str);
		str++;
	}
}

void put_d(va_list args)
{
	int d = va_arg(args, int);

	printf ("%d", d);
}

void put_u(va_list args)
{
	int u = va_arg(args, unsigned int);

	printf ("%u", u);
}
