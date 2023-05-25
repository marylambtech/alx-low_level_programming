#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 *_isalpha - This file checks for lowercas or uppercase alphabet
 *@c: character type
 *Description: Returns 1 if c isan alphabet, Returns 0 otherwise
 *
 *By Mariam A. Ibrahim
 *
 *Return: 0 (Success)
 */
int _isalpha(int c)
{
if (isalpha(c))
return (1);
else
return (0);
}
