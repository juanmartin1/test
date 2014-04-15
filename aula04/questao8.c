#include <stdio.h>

int main(){
  int sum = 0, qtty = 0, min = 1000000, max = 0, sumEven = 0, val, evenQtty = 0;

  scanf("%d", &val);
  while(val != 0){
    qtty++;
    if (val < min) min = val;
    if (val > max) max = val;
    if (!(qtty%2)){
      sumEven += val;
      evenQtty++;
    }
    sum += val;
    scanf("%d", &val);
  }
  
  printf("a) %d\nb) %d\nc) %f\nd) %d\ne) %d\nf) %f\n", sum, qtty, sum/(qtty*1.0), max, min, sumEven/(evenQtty*1.0));

  return 0;
}
