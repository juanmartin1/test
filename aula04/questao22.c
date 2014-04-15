#include <stdio.h>

int main(){
  int vetor[10], i;
  printf("Insira os valores do vetor\n");
  for (i = 0; i < 10; i++){
    int val;
    scanf("%d", &val);
    
    if (val < 0) val = 0;
    vetor[i] = val;
  }
  
  printf("Vetor corrigido:\n");
  for (i = 0; i < 10; i++){
    printf("%d ", vetor[i]);
  }
 

  return 0;
}
