#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
unsigned int i;
char *array;
 
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
array = malloc(new_size);
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < new_size; i++)
*(array + (i * new_size)) = 0;
return (array);
}
