#include <stdio.h>

int main(){
  int num, i;
  printf("Insira o numero\n");
  scanf("%d", &num);
  
  printf("Divisores de %d:\n", num);
  for (i = 1; i <= num; i++){
    if (!(num%i)) printf("%d ", i);
  }
  printf("\n");

  return 0;
}
