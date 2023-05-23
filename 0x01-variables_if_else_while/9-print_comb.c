#include <stdio.h>

/**
 *main - This program prints all possible combinations
 *of single-digit numbers using the putchar function
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
if (k < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
