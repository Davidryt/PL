#include <stdio.h>
main() {
  int arr[5];
  int i,j;
  int n = 4;
  int temp;
  arr[0] = 64;
  arr[1] = 25;
  arr[2] = 12, arr[3] = 22, arr[4] = 11;
  for ( i = 0;  i < n - 1; i=i+1) {
    for ( j = 0; j < n - i - 1; j=j+1) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  puts("Arreglo ordenado: ");
  for (i = 0; i < n; i=i+1) {
    printf("%d ", arr[i]);
  }
  puts("");
}

//@ (main) 
