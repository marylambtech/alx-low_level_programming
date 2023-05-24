#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - This file contains function that prints
 *10 times the alphabet, in lowercase, followed by a new line
 *Description: _putchar can only be used twice in the code
 *
 *By Mariam A. Ibrahim
 *
 *Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
char k;
int count;
for (count = 0; count < 10; count++)
{
for (k = 'a'; k <= 'z'; k++)
{
_putchar(k);
}
_putchar('\n');
}
}
