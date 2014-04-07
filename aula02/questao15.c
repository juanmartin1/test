#include <stdio.h>

int main(){
  int val1, val2;
  float val3;

  printf("Informe os 2 valores inteiros.\n");
  scanf("%d%d", &val1, &val2);

  printf("Informe o valor real.\n");
  scanf("%f", &val3);
  
  printf("a) %d\n", val1*val2);
  printf("b) %f\n", 3*val1+val3);
  printf("c) %f\n", val3*val3*val3);

  return 1;
}
