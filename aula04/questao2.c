#include <stdio.h>

int main(){
	int numHab, kwh, min = 1000000, max = -1, total1 = 0, total2 = 0, total3 = 0;
	printf("Qual o numero de habitantes?\n");
	scanf("%d", &numHab);
	printf("Qual o valor do KWh?\n");
	scanf("%d", &kwh);
	int i;
	for (i = 1; i <= numHab; i++){
		int cons, cod;
		printf("Qual o consumo do mes do habitante %d?\n", i);
		scanf("%d", &cons);
		printf("Qual o codigo do habitante %d?\n", i);
		scanf("%d", &cod);
		switch (cod){
			case 1:
				total1 += cons;
				break;
			case 2:
				total2 += cons;
				break;
			case 3:
				total3 += cons;
				break;
		}
		if (cons < min) min = cons;
		if (cons > max) max = cons;
	}
	printf("Maior: %d, Menor: %d, Media: %f, Total 1: %d, Total 2: %d, Total 3: %d\n", min, max, (total1 + total2 + total3)/numHab*1.0, total1, total2, total3);
	
	return 0;
}
