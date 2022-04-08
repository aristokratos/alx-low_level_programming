#include "main.h"
#include <stdlib.h>

/**
 * *_realloc -is function that reallocates a memory block
 * @ptr: is a pointer to the memory previously alloated with call
 * @old_size: is the size in bytes of the allocated space for ptr
 * @new_size: is the new size in bytes of the new memory block
 *
 * Return: Return free.
**/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *reaptr;

	if (ptr == NULL)
	{
		reaptr = malloc(new_size);
		if (reaptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (reaptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	reaptr = malloc(new_size);
	if (reaptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		_memcpy(reaptr, ptr, old_size);
	free(ptr);
	return (reaptr);
}

/**
 * _memcpy - function that copies memory area
 * @dest: dest position
 * @src: source position
 * @n: size of bytes
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + i) = *(src + j);
		i += 1;
		j += 1;
	}
	return (dest);
}
