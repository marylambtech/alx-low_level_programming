#include "main.h"

/**
 *_memset - Fills memory with a constant byte
 *@s: buffer array
 *@b: constant byte
 *@n: number of bytes of memory area
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
