#include <stdio.h>

/**
 * main - Prints the number of arguments.
 * @argc: The number of arguments passed.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc -1);

	return (0);
}
