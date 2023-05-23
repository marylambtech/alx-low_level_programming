#include <stdio.h>

/**
 *main - This program prints all possible different combinations of two digits
 *By Mariam A. Ibrahim
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int k, l;
for (k = 48; k < 58; k++)
{
for (l = 49; l < 58; l++)
{
if (k > l)
{
putchar(k);
putchar(l);
if (k < 56 || l < 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
