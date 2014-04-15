#include <stdio.h>

int main(){
  char string[1000];
  printf("Insira a string\n");
  scanf("%s", string);
  
  int i = 0;
  while (string[i] != '\0'){
    if (string[i] == '0')
      string[i] = '1';
    i++;
  }
  
  printf("%s\n", string);

  return 0;
}
