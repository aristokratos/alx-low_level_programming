#include "main.h"

/*
 * *_strcat - to concatenate *src to *dest
 * *src: source string to append to *dest
 * *dest: destination string to be concatenated on
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return dest;
}
