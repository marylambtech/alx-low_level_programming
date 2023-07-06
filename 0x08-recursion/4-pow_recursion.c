#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 *
 * @x: The integer value.
 *
 * @y: The power value which is an integer.
 *
 * Return: The calculated value.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
