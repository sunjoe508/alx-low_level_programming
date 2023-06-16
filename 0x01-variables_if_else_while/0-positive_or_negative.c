#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
*main - the begining of the program
*Return: returns 0 when successful
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d the number is positive\n", n)
	else if (n == 0)
		printf("%d the number is zero\n", n)
	else
		printf("%d the number is negative\n", n)
	return (0);
}
