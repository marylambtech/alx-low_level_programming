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
char K;
k = 'a';
K = 'A';
while (k <= 'z')
{
putchar(k);
k++;
}
while (K <= 'Z')
{
putchar(K);
K++;
}
putchar('\n');
return (0);
}
