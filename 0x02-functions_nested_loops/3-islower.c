#include <stdio.h>
#include "main.h"

/**
 *_islower - This file checks for lowercase characters
 *@c: character type
 *Description: Returns 1 if c is lowercase, Returns 0 otherwise
 *
 *By Mariam A. Ibrahim
 *
 *Return: 0 (Success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
