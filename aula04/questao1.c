#include <stdio.h>

int main(){
	int min = 1000000, max = -1, val;
	scanf("%d", &val);
	while (val >= 0){
		if (val < min) min = val;
		if (val > max) max = val;
		scanf("%d", &val);
	}
	printf("Min: %d, Max: %d\n", min, max);
	
	return 0;
}
