#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-A This program will assign a random number to the
*variable n each time it is execute
*Return:Always 0 (Success)
*/
int main(void)
{
int n, last_digit;
srand(time(0));
n = rand();
/* your code goes there */
last_digit = abs(n) % 10;
printf("Last digit of %d is %d ", n, last_digit);
if (last_digit > 5)
{
printf("is greater than 5\n");
}
else if (last_digit == 0)
{
printf(" and is 0\n");
}
else if (last_digit < 0 && last_digit != 0)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
