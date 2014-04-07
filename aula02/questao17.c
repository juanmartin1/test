#include <stdio.h>

int main(){
  float altura;
  char sexo;
  float peso, pesoIdeal;

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
  
  printf("Insira seu peso\n");
  scanf("%f", &peso);
  
  if (peso == pesoIdeal){
    printf("Voce esta dentro do peso.\n");
  }
  else{
    if (peso > pesoIdeal){
      printf("Voce esta acima do peso.\n");
    }
    else{
      printf("Voce esta abaixo do peso.\n");
    }
  }

  return 1;
}
