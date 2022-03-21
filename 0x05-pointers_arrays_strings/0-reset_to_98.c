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

   printf("Address of var variable: %x\n", &var  );

   printf("Address stored in ip variable: %x\n", ip );

   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}
