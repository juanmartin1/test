#include <stdio.h>

int main(){
  float altura, peso, imc;

  printf("Insira a altura em metros.\n");
  scanf("%f", &altura);
  
  printf("Insira peso\n");
  scanf("%f", &peso);
  
  imc = peso/(altura*altura);
  
  if (imc < 18.5) printf("Abaixo do peso\n");
  else if (imc < 25) printf("Saudavel\n");
	  else if (imc < 30) printf("Peso em excesso\n");
		  else if (imc < 35) printf("Obesidade Grau I\n");
			  else if (imc < 40) printf("Obesidade Grau II\n");
				  else printf("Obesidade Grau III\n");
  
  return 1;
}
