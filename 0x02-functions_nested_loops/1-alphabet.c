#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - This file contains unction that prints the alphabet,
 *in lowercase, followed by a new line
 *Description: _putchar can only be used twice in the code
 *
 *By Mariam A. Ibrahim
 *
 *Return: 0 (Success)
 */
void print_alphabet(void)
{
char k;
k = 'a';
while (k <= 'z')
{
_putchar(k);
k++;
}
_putchar('\n');
}
