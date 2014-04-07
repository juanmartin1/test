#include <stdio.h>

int main(){
  int metros;

  printf("Insira o valor em metros a ser convertido para centimetros.\n");
  
  scanf("%d", &metros);

  printf("%dm = %dcm\n", metros, metros*100);
  
  return 1;
}
