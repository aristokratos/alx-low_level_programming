#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory in a 2 dimensional array of ints..
 *
 * @width: columns.
 * @height: height.
 *
 * Return: Returns the created array.
**/

int **alloc_grid(int width, int height)
{

int i, j;
int **ar;

if (width <= 0 || height <= 0)
return (NULL);

ar = malloc(height * sizeof(int *));

if (ar == NULL)
return (NULL);
else
{
for (i = 0; i < height; i++)
{
ar[i] = malloc(width * sizeof(int));

if (ar[i] == NULL)
{
for (j = i; j >= 0; j--)
free(ar[j]);
free(ar);
return (NULL);
}

for (j = 0; j <= i; j++)
ar[i][j] = 0;
}

return (ar);
}

}
