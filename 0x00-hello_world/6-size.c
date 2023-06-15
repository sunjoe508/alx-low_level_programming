#include<stdio.h>
/**
* main - the start of a program that prints various types
* Return: returns 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
