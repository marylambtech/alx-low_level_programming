#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of element
 * @size: size of element
 * Return: if nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = calloc(nmemb, size);

	if (mem == NULL)
		return (NULL);

	return (mem);
}
