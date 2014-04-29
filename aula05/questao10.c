#include <stdio.h>

int main(){
	printf("1-Soma de 2 numeros\n2-Diferenca de 2 numeros (maior pelo menor)\n3-Produto entre 2 numeros\n4-Divisao entre 2 numeros (o denominador nao pode ser zero)\n");

	int opcao;
	scanf("%d", &opcao);
	
	if ((opcao < 1)||(opcao > 4)){
		printf("Opcao invalida\n");
	}
	else{
		int num1, num2, result;

		printf("Insira os dois numeros\n");
		scanf("%d %d", &num1, &num2);

		switch (opcao){
			case 1:
				result = num1 + num2;
				break;
			case 2:
				if (num1 > num2){
					int aux = num1;
					num1 = num2;
					num2 = aux;
				}
				result = num2 - num1;
				break;
			case 3:
				result = num1*num2;
				break;
			case 4:
				if (num2) result = num1/num2;
				else result = 0;
				break;
		}
		printf("Resultado: %d\n", result);
	}

	return 1;
}
