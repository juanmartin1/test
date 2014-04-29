#include <stdio.h>

int main(){
	int idade, tempo;
	printf("Insira a idade\n");
	scanf("%d", &idade);

	printf("Insira o tempo de servico\n");
	scanf("%d", &tempo);
	
	if ((idade >= 65)||(tempo >= 30)||((idade >= 60)&&(tempo >= 25))){
		printf("Pode se aposentar\n");
	}
	else printf("Nao pode se aposentar\n");

	return 1;
}
