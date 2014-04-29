#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[5], b[5], respCorreta[5], nota = 0, i;
	
	for (i = 0; i < 5; i++){
		int resp;
		a[i] = rand()%100;
		b[i] = rand()%100;
		respCorreta[i] = a[i]+b[i];

		printf("Qual o valor da soma %d + %d?\n", a[i], b[i]);
		scanf("%d", &resp);

		if (resp == respCorreta[i]) nota++;
	}
	
	printf("Respostas:\n");
	for (i = 0; i < 5; i++){
		printf("Qual o valor da soma %d + %d?\n", a[i], b[i]);
		printf("Resposta: %d\n", respCorreta[i]);
	}
	printf("Numero de respostas corretas: %d\n", nota);
	
	return 1;
}
