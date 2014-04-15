#include <stdio.h>

int main(){
  int vetor[10], max = 0, pos, i;
  
  for (i = 0; i < 10; i++){
    int val;
    scanf("%d", &val);
    vetor[i] = val;
    if (val > max){
      max = val;
      pos = i;
    }
  }
  
  printf("Vetor: ");
  for (i = 0; i < 10; i++){
    printf("%d ", vetor[i]);
  }
  printf("\nMaior: %d\nPos: %d\n", max, pos);

  return 0;
}
