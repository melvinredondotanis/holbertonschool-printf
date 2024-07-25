#include "main.h"

/**
 * check_format - function that checks if a character is a format specifier
 * @format: character to check
 * Return: format specifier or 0 if not found
 */
char check_format(char format)
{
	int i;
	char types[6] = {'c', 's', 'd', 'i', 'b', '%'};

	for (i = 0; i < 6; i++)
	{
		if (format == types[i])
			return (types[i]);
	}
	return (0);
}


