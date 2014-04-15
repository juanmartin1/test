#include <stdio.h>

int main(){
  int vetor[10], equals[10], i, j, eqSize;
  for (i = 0; i < 10; i++){
    int val;
    scanf("%d", &val);
    
    vetor[i] = val;
    
    for (j = 0; j < i; j++){
      if (vetor[j] == vetor[i]){
        int exists = 0;
        int p;
        for (p = 0; p < eqSize; p++){
          if (equals[p] == vetor[i]){
            exists = 1;
          }
        }
        if (!exists) equals[eqSize++] = vetor[i];
        break;
      }
    }
  }
  
  printf("Equals:\n");
  for (i = 0; i < eqSize; i++){
    printf("%d ", equals[i]);
  }

  return 0;
}
