#include <stdio.h>

int main(){
  float temp;

  printf("Informe a temperatura em Farenheit.\n");
  
  scanf("%f", &temp);

  printf("%f Farenheits = %f Celsius\n", temp, (5*(temp-32))/9);
  
  return 1;
}
