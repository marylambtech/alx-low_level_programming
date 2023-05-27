#include <stdio.h>
#include "main.h"

/**
 *print_most_numbers - function that prints the numbers,
 *from 0 to 9, followed by a new line
 *
 *Description: 2 and 4 are not to be printed
 *
 *By Mariam A. Ibrahim
 *
 *Return: 0 (Success)
 */
void print_most_numbers(void)
{
int b;
for (b = 0; b < 10; b++)
{
if (b != 2 && b != 4)
_putchar(b + '0');
}
_putchar('\n');
}
