#include <stdio.h>

int main(){
  int vetor1[100], vetor2[100], i, j = 0, n;
  
  printf("Qual o numero de inteiros do vetor?\n");
  scanf("%d", &n);
  
  printf("Insira os valores\n");
  for (i = 0; i < n; i++){
    int val;
    scanf("%d", &val);
    
    vetor1[i] = val;
    if (vetor1[i]%2) vetor2[j++] = vetor1[i];
  }
  
  printf("Vetor 1:\n");
  for (i = 0; i < n; i++){
    if (!(i%10)) printf("\n");
    printf("%d ", vetor1[i]);
  }

  printf("\nVetor 2:\n");
  for (i = 0; i < j; i++){
    if (!(i%10)) printf("\n");
    printf("%d ", vetor2[i]);
  }

  return 0;
}
