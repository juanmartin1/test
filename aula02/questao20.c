#include <stdio.h>

int main(){
  float tamanho, velocidade;
  
  printf("Insira o tamanho do arquivo (em MB)\n");
  scanf("%f", &tamanho);
  
  printf("Insira a velocidade do link (em Mbps)\n");
  scanf("%f", &velocidade);
  
  printf("Tempo aproximado de download: %f minutos\n", (tamanho/velocidade)/60);

  return 1;
}
