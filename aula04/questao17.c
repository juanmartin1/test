#include <stdio.h>

int getReverse(int num){
  int reverse = 0;
  int rem;
  while(num != 0){
    rem = num%10;
    reverse = reverse*10+rem;
    num /= 10;
  }
  
  return reverse;
}

int inline isPalindrome(int num){
  return (num == getReverse(num));
}

int main(){
  int i, j;
  int maxI = 0, maxJ = 0;

  for (i = 0; i < 1000; i++){
    for (j = 0; j < 1000; j++){
      if (isPalindrome(i*j)){
        if (i*j > maxI*maxJ){
          maxI = i;
          maxJ = j;
        }
      }
    }
  }
  
  printf("%d*%d = %d\n", maxI, maxJ, maxI*maxJ);

  return 0;
}
