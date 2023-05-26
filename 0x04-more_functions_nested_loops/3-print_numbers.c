#include <stdio.h>
#include "main.h"

/**
 *print_numbers - function that prints the numbers,
 *from 0 to 9, followed by a new line
 *
 *Description: _putchar can only be used twice in the code
 *
 *By Mariam A. Ibrahim
 *
 *Return: 0 (Success)
 */
void print_numbers(void)
{
int b;
for (b = 0; b < 10; b++)
{
_putchar(b + '0');
}
_putchar('\n');
}
