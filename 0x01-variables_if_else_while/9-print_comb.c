#include<stdio.h>
/**
*main - the begining of the program
*Return: returns 0
*/

int main(void)
{
int i = '0';
while (i <= '9')
{
	putchar(i);
	if (i != '9')
	{
		putchar(',');
		putchar(' ');
	}
	++i;
}
putchar('\n');

return (0);
}
