#include <stdio.h>

int main(){
	int i, sum = 0;
	for (i = 0; i < 50; i++){
		sum += 2*i;
	}
	printf("Soma: %d\n", sum);
	return 0;
}
