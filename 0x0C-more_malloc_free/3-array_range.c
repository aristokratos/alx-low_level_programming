#include "main.h"
#include <stdlib.h>

/**
 * *array_range - is function that creates an array of integers.
 *@max: is value to int.
 *@min: is value to int.
 *
 * Return: the pointer to the newly created array.
**/

int *array_range(int min, int max)
{
int i;
int *a;

if (min > max)
{
return (NULL);
}
a = malloc((max - min + 1) * sizeof(*a));
if (a == NULL)
{
return (NULL);
}

for (i = 0; min <= max; i++, min++)
{
a[i] = min;
}
return (a);
}
