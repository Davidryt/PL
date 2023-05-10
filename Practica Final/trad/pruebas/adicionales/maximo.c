#include <stdio.h>
main() {
   int a, b, c, max;
   puts("Enter three numbers: ");
   a = 2;
   b = 7;
   c = 90;
   if(a >= b && a >= c) {
      max = a;
   }
   if(b >= a && b >= c) {
      max = b;
   } else {
      max = c;
   }
   printf(" %d", max);
}

//@ (main) 
