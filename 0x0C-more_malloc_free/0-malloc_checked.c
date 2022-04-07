#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - is a function that allocates memory.
 * @b: size used to initialize unsigned int
 *
 * Return: always success.
**/

void *malloc_checked(unsigned int b)
{
void *array = malloc(b);

if (array == NULL)
{
exit(98);
}
return (array);
}
