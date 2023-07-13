#include <stdio.h>
#include "main.h"
/**
 *swap_int -the Begining of a program that swaps the values of two integers.
 *@a: value to evaluate.
 *@b: value to evaluate.
 *Return: void
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
