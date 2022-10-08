#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function to allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: element's size.
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal;

	if (nmemb == 0 || size == 0)
		return (NULL);
	cal = malloc(nmemb * size);
	if (cal == NULL)
		return (NULL);
	_memset(cal, 0, nmemb * size);
	return (cal);
}
/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: memory area to return
 * @b: constant bytes
 * @n: size of bytes
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{

		*(s + i) = b;
		i += 1;
	}
	return (s);
}
