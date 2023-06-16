#include<stdio.h>
/**
*main - the begining of the program
*Return: returns 0
*/

int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
if (lowerCase == 'e' || lowerCase == 'q')
{
lowerCase += 1;
}
else
{putchar(lowerCase);
lowerCase += 1;
}
}
putchar('\n');
return (0);
}
