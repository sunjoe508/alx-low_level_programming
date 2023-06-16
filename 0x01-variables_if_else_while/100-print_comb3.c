#include<stdio.h>
/**
*main - the program starts
*Retun: returns 0
*/
int main(void)
{
int n;
int m;

for (m = '0'; m <= '9'; m++)
{
	for (n = '0'; n <= '9'; n++)
	{
		if (!(n == '9' && m == '8'))
		{
			putchar(' ,');
			putchar(' ');
		}
	}
}

putchar('\n');

return (0);
}
