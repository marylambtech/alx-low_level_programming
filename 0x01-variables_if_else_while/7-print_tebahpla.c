#include <stdio.h>

/**
 *main - This program prints the alphabets in lowercase
 *in reverse using the putchar function
 *By Mariam A. Ibrahim
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char k;
k = 'z';
while (k >= 'a')
{
putchar(k);
k--;
}
putchar('\n');
return (0);
}
