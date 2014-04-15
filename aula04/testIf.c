#include <stdio.h>

void somar(int a, int b){
	printf("O resultado de %d+%d e %d\n", a, b, a+b);
}

void subtrair(int a, int b){
	printf("O resultado de %d-%d e %d\n", a, b, a-b);
}

void executar(void func(int a, int b)){
	(*func)(1, 3);
}

int main(){
	char op;
	printf("Insira uma operacao ('+' ou '-')\n");
	scanf("%c", &op);
	if (op == '+'){
	    executar(&somar);
    }
    else{
    	if (op == '-'){
	    	executar(&subtrair);
		}
		else{
			printf("Operacao invalida. Se fosse uma prova teria tirado 0. Tente de novo.\n");
			scanf(" %c", &op);
			if (op == '+'){
			    executar(&somar);
		    }
		    else{
		    	if (op == '-'){
			    	executar(&subtrair);
				}
				else{
					printf("Ja vi que voce nao vai conseguir. Vou fazer pra voce:\n");
					long i = 0;
					while(i++ < 1000000000){}
					system("cls");
	                printf("\"Insira uma operacao ('+' ou '-')\"\n");
					i = 0;
					while(i++ < 1000000000){}
					printf("Ai voce vai e digita '+' ou '-':\nVou botar '+'\n");
					i = 0;
					while(i++ < 1000000000){}

                    int j;
                    for (j = 0; j < 20; j++){
						system("cls");
						printf("+");
						i = 0;
						while(i++ < 100000000){}
						printf(" <-");
						if (j >= 10){
  						  printf("\n/\\\n|");	
						}
						i = 0;
						while(i++ < 100000000){}
				    }
					printf("\n");
					executar(&somar);
					i = 0;
					while(i++ < 1000000000){}
					printf("Doeu?\n");
				}
		    }
		}
    }
	return 0;
}
