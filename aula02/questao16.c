#include <stdio.h>

int main(){
  float altura;

  printf("Insira a altura em metros.\n");
  scanf("%f", &altura);

  printf("O peso ideal e %fkg\n", 72.7*altura-58);

  return 1;
}
