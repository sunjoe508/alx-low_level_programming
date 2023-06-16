#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
<<<<<<< HEAD
			if (i < j)
=======
			putchar((n / 10) + 48);
			putchar((n % 10) + 48);
			putchar(' ');
			putchar((m / 10) + 48);
			putchar((m / 10) + 48);
			if (n != 98 || m != 99)
>>>>>>> 677c4b6cdc557d77b66fc6bedef1a7a3ddc81943
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
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
