#include<stdio.h>
/**
 * main - the begining of the program
 * Return: returns 0
 */
int main(void)
{
int a;
int b;
int c;
for (c = '0'; c <= '9'; c++)
{
	for (b = '0'; b <= '9'; b++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			if (!(((a == b) || (b == c) || (b > c) || (b > a) || (c > b))))
			{
				putchar(c);
				putchar(b);
				putchar(a);
				if (!(a == '9' && c == '7' && b == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}

putchar('\n');

return (0);
}
