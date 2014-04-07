#include <stdio.h>

int main(){
  int nota[4];

  printf("Insira as quatro notas bimestrais.\n");
  
  scanf("%d%d%d%d", &nota[0], &nota[1], &nota[2], &nota[3]);

  printf("A media é %d\n", (nota[0]+nota[1]+nota[2]+nota[3])/4);
  
  return 1;
}
