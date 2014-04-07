#include <stdio.h>

int main(){
  float salario, horas;

  printf("Quanto voce ganha por hora?\n");
  
  scanf("%f", &salario);

  printf("Quantas horas voce trabalhou este mes?\n");
  
  scanf("%f", &horas);

  printf("O salario deste mes sera de R$%.02f\n", salario*horas);
  
  return 1;
}
