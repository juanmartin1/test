#include <stdio.h>

int main(){
  int vetor[10], i, j = 0, pares[10];
  printf("Insira os valores do vetor\n");
  for (i = 0; i < 10; i++){
    int val;
    scanf("%d", &val);
    
    vetor[i] = val;
    if (!(val%2)) pares[j++] = val;
  }
  
  printf("Ha %d pares:\n", j);
  for (i = 0; i < j; i++){
    printf("%d ", pares[i]);
  }

  return 0;
}
