#include "main.h"

/**
* print_binary - is function to convert int to binary
* @n: is an unsigned long int number
*
* Return: Nothing.
**/

void print_binary(unsigned long int n)
{
if (n >> 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
