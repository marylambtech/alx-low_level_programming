#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints the struct dog
 * @d: the struct of the dog
 *
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %d\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
