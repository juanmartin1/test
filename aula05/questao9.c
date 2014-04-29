#include <stdio.h>

int main(){
	float sal, emp;
	printf("Insira o salario\n");
	scanf("%f", &sal);
	printf("Insira o valor da prestacao do emprestimo\n");
	scanf("%f", &emp);
	
	if (emp > (sal/5.0)) printf("Emprestimo nao concedido\n");
	else printf("Emprestimo concedido\n");
	
	return 1;
}
