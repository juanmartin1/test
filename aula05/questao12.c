#include <stdio.h>
#include <math.h>

int main(){
	int x, y, z, opcao;
	printf("Insira os 3 numeros\n");
	scanf("%d %d %d", &x, &y, &z);
	
	printf("Insira a opcao\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("Media Geometrica: %f\n", cbrt(x*y*z));
			break;
		case 2:
			printf("Media Ponderada: %f\n", (x+2*y+3*z)/6.0);
			break;
		case 3:
			printf("Media Harmonica: %f\n", 1.0/(1/x+(1/y)*(1/z)));
			break;
		case 4:
			printf("Media Aritmetica: %f\n", (x+y+z)/3.0);
			break;
		default: printf("Opcao invalida\n");
	}

	return 1;
}
