#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 *
 * @n: The number for which factorial is calculated.
 *
 * Return: The factorial value.
 */

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n < 2)
return (1);
else
return (n * factorial(n - 1));
}
