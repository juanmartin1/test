#include <stdio.h>

#define PI 3.141592

int main(){
  int raio;

  printf("Insira o valor do raio do circulo.\n");
  
  scanf("%d", &raio);

  printf("A area do circulo e %f\n", PI*raio*raio);
  
  return 1;
}
