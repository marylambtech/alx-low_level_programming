#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: char string
 * @c: char to look for
 * Return: NULL if char not found,
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
