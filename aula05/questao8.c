#include <stdio.h>

int main(){
	int num, inv;
	scanf("%d", &num);
	
	if (num >= 1000){
		printf("Numero invalido\n");
		return -1;
	}
	
	printf("Inverso: %d\n", (num%1000)/100 + ((num%100)/10)*10 + (num%10)*100);
	
	return 1;
}
