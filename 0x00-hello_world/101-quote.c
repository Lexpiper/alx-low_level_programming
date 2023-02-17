#include <unistd.h>
/**
*main-A program that prints a line with the write function
*
*Return:Always 0 (Success)
*/
int main(void)
{
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = 0;
while (str[len])
{
	len++ i;
}
write(2, str, len);
return (1);
}
