#include<stdio.h>
/**
 * main - begining of the program
 * Return: reurns 0 when correct
 */
int main(void)
{
int n;
int m;

for (n = 0; n < 100; n++)
{
	for (m = 0; m < 100; m++)
	{
		if (n < m)
		{
			putchar((n / 10) + 48);
			putchar((n % 10) + 48);
			putchar(' ');
			putchar((m / 10) + 48);
			putchar((m / 10) + 48);
			if (N != 98 || m != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}

putchar('\n');

return (0);
}
