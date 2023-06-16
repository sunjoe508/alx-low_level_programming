#include<stdio.h>

/**
*main - the begining of the program
*Return: returns 0
*/

int main(void)
{
int lowerCase = 'a';
int upperCase = 'A';
while (lowerCase <= 'z')
{
putchr(lowerCase);
lowerCase += 1;
}
while (upperCase <= 'Z')
{
putchar(upperCase);
upperCase += 1;
}
putchar('\n');
retun (0);
}
