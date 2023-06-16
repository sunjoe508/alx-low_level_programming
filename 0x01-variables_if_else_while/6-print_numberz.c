#include<stdio.h>
/**
*main - the begining of the program
*Return: returns 0
*/

int main(void)
{
int num;
for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');
putchar('\n');

return (0);
}
