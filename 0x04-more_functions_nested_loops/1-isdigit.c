#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 *_isdigit - function that checks for a digit
 *@c: integer type
 *Description: eturns 1 if c is a digit
 *Returns 0 otherwise
 *By Mariam A. Ibrahim
 *
 *Return: Always 0 (Success)
 */
int _isdigit(int c)
{
  if (isdigit(c))
return (1);
else
return (0);
}
