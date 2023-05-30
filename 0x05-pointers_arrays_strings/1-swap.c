#include <stdio.h>
#include "main.h"

/**
 *swap_int - function that swaps the value of two integers
 *@a: first integer value
 *@b: second integer value
 *by Mariam A. Ibrahim
 *Return: 0
 *
 */
void swap_int(int *a, int *b)
{
int val;
val = *a;
*a = *b;
*b = val;
}
