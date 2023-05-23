#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program will assign a random number to the variable n
 *each time it is executed.
 *Author: Mariam A. Ibrahim
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int n;
int z;
srand(time(0));
n = rand() - RAND_MAX / 2;
z = n % 10;
if (z > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, z);
else if (z == 0)
  printf("Last digit of %d is %d ans is 0\n", n, z);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, z);
return (0);
}
