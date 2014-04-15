#include <stdio.h>

int main(){
  int sum = 0, i;
  
  printf("Insira 10 valores.\n");
  for (i = 0; i < 10; i++){
    int val;
    scanf("%d", &val);
    sum += val;
  }
  printf("Soma: %d\n", sum);

  return 0;
}
