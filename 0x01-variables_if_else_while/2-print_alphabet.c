#include <stdio.h>

/**
 *main - This program prints the alphabets in lowercase
 *using the putchar function
 *By Mariam A. Ibrahim
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char k;
k = 'a';
while (k <= 'z')
{
putchar(k);
k++;
}
putchar('\n');
return (0);
}
