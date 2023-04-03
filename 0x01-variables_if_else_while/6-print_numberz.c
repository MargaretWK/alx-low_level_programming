#include <stdio.h>
/**
*main - main function
*
* Return: always 0
*/
int main(void)
{
int d;
for (d = 0; d < 10; d++)
{
	putchar(d + '0');
}
putchar('\n');
return (0);
}
