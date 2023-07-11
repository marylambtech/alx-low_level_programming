#include <stdio.h>
#include "main.h"
#include <stdlib>

/**
 * main - Prints the result of multiplication of two numbers.
 * @argc: The number of arguments passed.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 - if program receives 2 arguments.
 *         1 - If the program does not receive two arguments
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}