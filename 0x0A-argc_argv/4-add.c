#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: array of the argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int k, num;

	for (k = 1; k < argc; k++)
	{
		char *arg = argv[k];
		int j;

		for (j = 0; arg[j] != '\0'; j++)
		if (!isdigit(arg[j]))
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(arg);

		if (num < 0)
		{
		printf("Error\n");
		return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
