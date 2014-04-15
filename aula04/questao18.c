#include <stdio.h>

int main(){
  int i, found = 0;
  long num;
  while (!found){
    num++;
    found = 1;
    for (i = 1; i <= 20; i++){
      if (num%i) found = 0;
    }
  }
  
  printf("%ld\n", num);
  
  return 0;
}
