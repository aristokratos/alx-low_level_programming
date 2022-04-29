#include "main.h"

/**
* get_bit - is a function that returns the bit at index position of a number
* @n: is unsigned long int number
* @index: is an unsigned int
*
* Return: return 1 when bit is 1 else 0.
**/

int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(index) * 8))
return (-1);
if ((n >> index) & 1)
return (1);
return (0);
}
