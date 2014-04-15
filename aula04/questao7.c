#include <stdio.h>
#include <math.h>

int main(){
	int num, prime = 1;
	float i;
	
	printf("Insira o numero\n");
	scanf("%d", &num);
	
	for (i = 2.0; i < num; i++){
		if (floor(num/i) == ceil(num/i)){
			prime = 0;
		}
	}
	
	if (prime) printf("O numero e primo\n");
	else printf("O numero nao e primo\n");
	
	return 0;
}
