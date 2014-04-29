#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	
	printf("Antecessor: %d\nSucessor: %d\n", num-1, num+1);
	
	return 1;
}
