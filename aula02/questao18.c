#include <stdio.h>

int main(){
  float peso, excesso = 0, multa = 0;
  
  printf("Insira o peso dos peixes\n");
  scanf("%f", &peso);
  
  if (peso > 50){
    excesso = peso - 50;
    multa = excesso*4;
  }
  
  printf("Excesso: %fkg, Multa: R$%.02f\n", excesso, multa);

  return 1;
}
