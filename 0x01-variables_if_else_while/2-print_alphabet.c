#include<stdio.h>
#include<ctype.h>

/**
*main - the programm starts
*Return: always give 0 when success
*/

int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
putchar('\n');
return (0);
}
