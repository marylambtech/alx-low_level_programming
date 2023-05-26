#include <stdio.h>
#include "main.h"

/**
 *main - This program checks for uppercase character
 *@c: character type
 *Description: eturns 1 if c is uppercase
 *Returns 0 otherwise
 *By Mariam A. Ibrahim
 *
 *Return: Always 0 (Success)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
