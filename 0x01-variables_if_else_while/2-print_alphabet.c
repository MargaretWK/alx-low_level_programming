#include <stdio.h>
/**
*main - main function
*
* Return: always 0
*/
int main(void)
{
char ch = 'a';

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}

putchar('\n');
return (0);
}
