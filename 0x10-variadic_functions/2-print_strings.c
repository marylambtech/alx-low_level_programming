#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - functions that prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to be printed
 * description: if separator is NULL, it is not printed
 *              if one of the string is NULL, (nil) is printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int j;

	va_start(strings, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
