#include<stdio.h>
/**
*main - the begining of the program
*Return: returns 0
*/

int main(void)
{
int letter;

for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

putchar('\n');

return (0);
}
