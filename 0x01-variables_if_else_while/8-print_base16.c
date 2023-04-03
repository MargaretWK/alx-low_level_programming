#include <stdio.h>
/**
*main - main function
*
* Return: always 0
*/
int main(void)
{
char d;
char l;

for (d = 0; d < 10; d++)
{
	putchar(d + '0');
}
for (l = 'a'; l <= 'f'; l++)
{
	putchar(l);
}
putchar('\n');
return (0);
}
