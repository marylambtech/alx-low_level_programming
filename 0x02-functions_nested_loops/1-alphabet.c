#include <stdio.h>
#include "main.h"

/**
 *main - This file contains unction that prints the alphabet,
 *in lowercase, followed by a new line
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
