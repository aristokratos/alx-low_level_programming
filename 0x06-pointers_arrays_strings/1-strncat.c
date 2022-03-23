#include "main.h"


/**
 * *_strncat - to concatenate *src to *dest
 * *src: source string to append to *dest
 * *dest: destination string to be concatenated on
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n);

           strncat(char *dest, const char *src, size_t n)
           {
               size_t dest_len = strlen(dest);
               size_t i;

               for (i = 0 ; i < n && src[i] != '\0' ; i++)
                   dest[dest_len + i] = src[i];
               dest[dest_len + i] = '\0';

               return dest;
           }
