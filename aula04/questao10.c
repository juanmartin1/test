#include <stdio.h>
#include <string.h>

int main(){
  int i, total = 0;
  char string[1000];
  printf("Insira a string\n");
  scanf("%s", string);

  for (i = 0; i < strlen(string); i++){
    if (string[i] == '1')
      total++;
  }
  
  printf("%d\n", total);

  return 0;
}
