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
for (k = 48; k < 58; k++)
{
putchar(k);
}
putchar('\n');
return (0);
}
