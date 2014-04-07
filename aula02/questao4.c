#include <stdio.h>

int main(){
  printf("Digite o caracter.\n");
  char x;
  scanf("%c", &x);
  printf("Caracter: %c, ASCII: %d\n", x, x);
  
  return 1;
}
