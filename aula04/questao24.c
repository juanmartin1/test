#include <stdio.h>

int main(){
  int vetor[11], orgVetor[11], i, j;
  int pos[] = {5, 4, 6, 3, 7, 2, 8, 1, 9, 0, 10};
  
  for (i = 0; i < 11; i++){
    int val;
    scanf("%d", &val);
    vetor[i] = val;
  }
  
  
  for (j = 0; j < 11; j++){
    // Find max
    int max = 0, maxPos = 0;
    for (i = 0; i < 11; i++){
      if (vetor[i] > max){
        max = vetor[i];
        maxPos = i;
      }
    }
    vetor[maxPos] = 0;
    
    orgVetor[pos[j]] = max;
  }

  printf("Vetor ordenado:\n");
  for (j = 0; j < 11; j++){
    printf("%d ", orgVetor[j]);
  }

  return 0;
}
