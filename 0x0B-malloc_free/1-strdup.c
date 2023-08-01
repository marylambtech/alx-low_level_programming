#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string
 * @str: string
 * Return: Pointer to a the new string
 */

char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(i * sizeof(*s) + 1);
	if (s == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		s[j] = str[j];
	s[j] = '\0';

	return (s);
}
