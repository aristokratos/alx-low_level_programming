#include "main.h"
#include <stdio.h>

/**
 * main - print sum of all multiples of 3 and 5 up to 1024
 *
 * @void: Empty parameter list for main
 *
 * Description: prints the sum of all multiples of 3 and 5
 * up to but not including 1024
 *
 * Return: return 0
 *
 **/

int main(void)
{
	int sum, i;

	sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
