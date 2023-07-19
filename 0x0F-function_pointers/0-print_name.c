#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: name of the person
 * @f: pointer to the function
 *
 */

void print_name(char *name, void (*f)(char *))
{
  if (name != NULL && f != NULL)
    (*f)(name);
}
