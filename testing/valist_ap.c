#include <stdarg.h>
#include <stdio.h>

int sum(int, ...);

int main () {
   printf("Sum of 15 --> 40 = %d\n",  sum(4, 15, 56, 29, 40) );
   return 0;
}

int sum(int num_args, ...) {
   int val = 0;
   va_list ap;
   int i;

   va_start(ap, num_args);
   for(i = 0; i < num_args; i++) {
      val += va_arg(ap, int);
   }
   va_end(ap);
 
   return val;
}