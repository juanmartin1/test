#include <stdio.h>

int main(){
  unsigned horaCheg, minCheg, horaSaida, minSaida, horas;
  float valor = 0.0;
  
  printf("Insira a hora de chegada (hh mm)\n");
  scanf("%u %u", &horaCheg, &minCheg);
  while ((horaCheg >= 24)||(minCheg >= 60)){
    printf("Valores invalidos\n");
    printf("Insira a hora de chegada (hh mm)\n");
    scanf("%u %u", &horaCheg, &minCheg);  
  }
  
  printf("\nInsira a hora de saida (hh mm)\n");
  scanf("%u %u", &horaSaida, &minSaida);
  while ((horaSaida >= 24)||(minSaida >= 60)){
    printf("Valores invalidos\n");
    printf("Insira a hora de saida (hh mm)\n");
    scanf("%u %u", &horaSaida, &minSaida);  
  }
  
  if (horaCheg > horaSaida) horas = 24 + horaSaida - horaCheg;
  else horas = horaSaida - horaCheg;
  
  if (minCheg != minSaida) horas += 1;

  unsigned int i;
  for (i = 0; i < horas; i++){
    if ((i == 0)||(i == 1)) valor += 1.0;
    else if ((i == 2)||(i == 3)) valor += 1.4;
         else valor += 2.0;
  }
  printf("\nPermanencia: %d horas\nValor: %f\n", horas, valor);
	
	return 1;
}

