#include <stdio.h>

int main(){
	int mult[5], i;
	mult[0] = 3*1;
	mult[1] = 3*2;
	mult[2] = 3*3;
	mult[3] = 3*4;
	mult[4] = 3*5;
	
	printf("5 primeiros multiplos de 3:\n");
	for (i = 0; i < 5; i++){
		printf("%d*3 = %d\n", i+1, mult[i]);
	}
	return 0;
}
