#include <stdio.h>

int main(){
  float altura;
  char sexo;
  float pesoIdeal;

  printf("Insira a altura em metros.\n");
  scanf("%f", &altura);
  
  printf("Insira o sexo (M ou F)\n");
  scanf(" %c", &sexo);
  
  if ((sexo == 'M')||(sexo == 'm')){
    pesoIdeal = 72.7*altura - 58;
  }
  else{
    pesoIdeal = 62.1*altura - 44.7;
  }
  
  printf("Peso ideal: %f\n", pesoIdeal);
  
  return 1;
}
