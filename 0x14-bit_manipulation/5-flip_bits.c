#include "main.h"

/**
 * flip_bits - counts the number of bits to flip
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, k = 0;
	unsigned long int new;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		new = ex >> i;
		if (new & 1)
			k++;
	}

	return (k);
}
