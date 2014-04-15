#include <stdio.h>

int main(){
  int fib1 = 0, fib2 = 1, temp, sum = 0, pos = 1;

  while (fib2 <= 4000000){
    if (!(++pos%2)) sum += fib2;
    temp = fib1;
    fib1 = fib2;
    fib2 += temp;
  }
  
  printf("%d\n", sum);

  return 0;
}
