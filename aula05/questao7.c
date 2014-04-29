#include <stdio.h>
#include <math.h>

int main(){
	int cat1, cat2;
	scanf("%d %d", &cat1, &cat2);
	
	printf("Hipotenusa: %f\n", sqrt(cat1*cat1 + cat2*cat2));
	
	return 1;
}
