#include <stdio.h>

int main(){
	int val, fib1 = 0, fib2 = 1;
	
	printf("Insira o valor\n");
	scanf("%d", &val);
	
	if (fib1 <= val){
		printf("0 ");
	}
	
	while(fib2 <= val){
		printf("%d ", fib2);
		int aux = fib1;
		fib1 = fib2;
		fib2 += aux;
	}
	
	return 0;
}
