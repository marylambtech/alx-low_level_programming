#include <stdio.h>

/**
 *main - This program prints the digits 0 to 9
 *using the putchar function
 *By Mariam A. Ibrahim
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int k;
k = 0;
while (k < 10)
{
putchar(k);
k++;
}
putchar('\n');
return (0);
}
