#include <stdio.h>

int main(){
  printf("Digite as strings.\n");
  char string1[1000];
  char string2[1000];
  scanf("%s", string1);
  scanf("%s", string2);
  printf("String 1: %s. Segunda letra: %c\n", string1, string1[1]);
  printf("String 2: %s. Segunda letra: %c\n", string2, string2[1]);
  
  return 1;
}
