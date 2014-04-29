#include <stdio.h>

int main(){
	float venda, comissao;
	scanf("%f", &venda);
	
	comissao = 14.0*venda/100.0;
	
	if (venda >= 100000.0) comissao += 700 + venda/50.0;
	else{
		if (venda >= 80000.0) comissao += 650;
		else{
			if (venda >= 60000.0) comissao += 600;
			else{
				if (venda >= 40000.0) comissao += 550;
				else{
					if (venda >= 20000) comissao += 500;
					else comissao += 400;
				}
			}
		}
	}
	
	printf("Comissao: %.02f", comissao);

	return 1;	
}
