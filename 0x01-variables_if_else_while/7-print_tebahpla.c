#include <stdio.h>
/**
 * main - Entry point
 * Description: prints Alphabets in lowercase & uppercase
 * stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
for (c = 'z'; c >= 'a'; c--)
{
	putchar(c);
}
putchar('\n');
return (0);
}
