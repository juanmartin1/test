#include <stdio.h>

int main(){
  int i;
  for (i = 1; i <= 100; i++){
    printf("%d ", i);
  }
  printf("\n");
  
  i = 1;
  while (i <= 100){
    printf("%d ", i++);
  }
  printf("\n");
  
  i = 1;
  do{
    printf("%d ", i);
  } while (i++ < 100);
  printf("\n");

  return 0;
}
