#include <stdio.h>

/**
 *main - This program prints the alphabets in lowercase
 *except letters q and e using the putchar function
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
if (k != 'e' && k != 'q')
{
putchar(k);
}
k++;
}
putchar('\n');
return (0);
}
