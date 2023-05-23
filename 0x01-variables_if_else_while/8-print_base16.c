#include <stdio.h>

/**
 *main - This program prints the hexadecimal digits
 *using the putchar function
 *By Mariam A. Ibrahim
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int k;
char c;
for (k = 48; k < 58; k++)
{
putchar(k);
}
for (c = 'a'; c < 'g'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
