#include <stdio.h>

int main(){
  int A[10], B[10], C[10], i;
  
  printf("A:\n");
  for (i = 0; i < 10; i++){
    int val;
    scanf("%d", &val);
    
    A[i] = val;
  }

  printf("B:\n");
  for (i = 0; i < 10; i++){
    int val;
    scanf("%d", &val);
    
    B[i] = val;
    C[i] = A[i] - B[i];
  }
  
  printf("C:\n");
  for (i = 0; i < 10; i++){
    printf("%d ", C[i]);
  }

  return 0;
}
