#include <stdio.h>
#include "main.h"

/**
 *print_last_digit - This file prints the last digit
 *@n: integer type value
 *Description: prints last digit of a number
 *
 *By Mariam A. Ibrahim
 *
 *Return: 0 (Success)
 */
int print_last_digit(int n)
{
	int y;

	if (n < 0)
	{
		y = -1 * (n % 10);
		_putchar(y + '0');
		return (y);
	}
	else
	{
		y = n % 10;
		_putchar(y + '0');
		return (y);
	}
}
