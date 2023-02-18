#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
int n1, n2;
for (n = 0; n < 10; n++)
{
putchar(n + '0');
if (n != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
