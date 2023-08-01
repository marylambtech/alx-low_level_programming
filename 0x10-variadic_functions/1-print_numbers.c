#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that print numbers
 * @separator: string to be printed between numbers
 * @n: number of interger passed to the function
 * @...: variable of number to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
