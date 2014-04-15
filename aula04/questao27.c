#include <stdio.h>

int main(){
  float vetor[5];
  int cod, i;
  printf("Insira o vetor\n");
  for (i = 0; i < 5; i++){
    float val;
    scanf("%f", &val);
    vetor[i] = val;
  }
  
  printf("Insira o codigo\n");
  scanf("%d", &cod);
  
  switch (cod){
    case 0:
      break;
    case 1:
      for (i = 0; i < 5; i++){
        printf("%f ", vetor[i]);
      }
      break;
    case 2:
      for (i = 4; i >= 0; i--){
        printf("%f ", vetor[i]);
      }
      break;
    default:
      printf("Codigo invalido");
  }
  
  printf("\n");

  return 0;
}
