#include <stdio.h>
/**
*main - main function
*
* Return: always 0
*/
int main(void)
{
	char l;

for (l = 'z'; l >= 'a'; l--)
{
	putchar(l);
}
putchar('\n');
return (0);
}
