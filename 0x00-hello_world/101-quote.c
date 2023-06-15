#include<stdio.h>
#include<unistd.h>
/**
* main - the start of a program that outputs a line with standard error
* Return: reurns 0
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
return (1);
}
