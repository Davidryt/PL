#include <stdio.h>

main() {
   int i, num1 = 0, num2 = 1, nextNum;
   printf("%d\n%d\n", num1, num2);
   for(i = 3; num1 + num2 < 100; i=i+1) {
      nextNum = num1 + num2;
      printf("%d\n", nextNum);
      num1 = num2;
      num2 = nextNum;
   }
}

//@ (main) 
