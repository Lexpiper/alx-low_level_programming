#include <stdio.h>
/**
 * main - Entry point
 * Description: prints Alphabets in lowercase & uppercase
 * stored in the variable n
 * Return: Always 0 (Success)
 */

int main(void)
{
char i;
for (i = 0; i < 10; i++)
{
	putchar(i + '0');
}
putchar('\n');
return (0);
}
