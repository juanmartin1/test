#include <stdio.h>

int main(){
  float temp;

  printf("Informe a temperatura em Celsius.\n");
  
  scanf("%f", &temp);

  printf("%f Celsius = %f Farenheits\n", temp, 9*temp/5.0+32);
  
  return 1;
}
