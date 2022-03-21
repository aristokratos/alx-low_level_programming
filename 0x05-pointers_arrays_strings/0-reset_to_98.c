#include "main.h"


/**
 * -reset_to_98  takes a pointer to an int as parameter and updates the value it points to to 98
 *
 * @c: character to be checked
 *
 * Return: 1 if c is capital, otherwise 0
 **/

int main () {

   int  var = 98;
   int  *ip;

   ip = &var;

int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);

   return 0;
}
