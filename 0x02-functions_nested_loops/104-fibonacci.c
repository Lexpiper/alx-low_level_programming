#include <stdio.h>

/**
*main - prints the first 98 Fibonacci numbers, starting with
*1 and 2 seperated by a comma followed by a space,
*Return: Always 0.
*/

int main(void)
{
int a = 1, b = 2, c;
int count = 0;

printf("%d, %d", a, b);
while (count < 96)
{
c = a + b;
a = b;
b = c;
printf(", %d", c);
count++;
}
printf("\n");
return (0);
}
