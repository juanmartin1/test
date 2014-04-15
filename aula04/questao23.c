#include <stdio.h>
#include <stdlib.h>

float calcMed(float* vetor){
  int sum = 0, i;
  for (i = 0; i < 15; i++){
    sum += vetor[i];
  }
  
  return sum/15.0;
}

float* readGrades(){
  float* vetor = malloc(sizeof(float)*15);
  int i;
  for (i = 0; i < 15; i++){
    float val;
    scanf("%f", &val);

    vetor[i] = val;
  }
  
  return vetor;
}

int main(){
  float* vetor = readGrades();
  printf("Media: %f\n", calcMed(vetor));
  
  free(vetor);

  return 0;
}
