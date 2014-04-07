#include <stdio.h>

int main(){
  float salHora, salBruto, salLiquido, IR, INSS, sindicato;
  int horas;
  
  printf("Insira quanto voce ganha por hora.\n");
  scanf("%f", &salHora);
  
  printf("Insira o numero de horas trabalhadas no mes.\n");
  scanf("%d", &horas);
  
  salBruto = salHora*horas;
  IR = 0.11*salBruto;
  INSS = 0.08*salBruto;
  sindicato = 0.05*salBruto;
  salLiquido = salBruto - IR - INSS - sindicato;

  printf("Salario bruto: R$%.02f\n", salBruto);
  printf("Valor pago ao INSS: R$%.02f\n", INSS);
  printf("Valor pago ao sindicato: R$%.02f\n", sindicato);
  printf("Salario liquido: R$%.02f\n", salLiquido);

  return 1;
}
