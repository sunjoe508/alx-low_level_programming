#include  "main.h"
/**
 * get_endianness - Gets to chck the volume useed to store
 * and organise bytes
 * Return: returns 0 if memo is big
 * 1 is memo is too small orsmall in general
*/
int get_endianness(void)
{
    int count;

    count = 1;
    if (*(char *)& count == 1)
    return (0);

    else
    return (1);
}
