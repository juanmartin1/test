#include <stdio.h>

int main(){
  float l;

  printf("Insira o valor do lado do quadrado.\n");
  
  scanf("%f", &l);

  printf("O dobro da area do quadrado e %.02f\n", 2*l*l);
  
  return 1;
}
