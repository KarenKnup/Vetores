#include <stdio.h>
/*
  Faça uma função que, dado um vetor de reais,
altere todas as ocorrências do número A pelo
número B.
  */

void altera (int A, int B, int v[]){
  int i, n;
  
  printf("\n---- Inverte A e B: ------\n");
  for(i=0; i<6; i++){
    if (v[i]==A){//v[i] é A
          v[i]=B; //A vira B
      } else if (v[i]==B) {
          v[i]=A;
      }
    printf("%d ",v[i]);
  }
}

void AparaB (int A, int B, int v[]){
  int i, n;

  printf("\n\n---- A vira B: ------\n");
  for(i=0; i<6; i++){
    if (v[i]==A){//v[i] é A
          v[i]=B; //A vira B
      }
    printf("%d ",v[i]);
  }
}

int main(void) {
int A=2,B=3, v[6]={2,2,2,3,4,5};
  // 3 3 3 2 4 5 - inverte A e B 
  // 3 3 3 3 4 5 - muda A para B
  
  altera (A,B,v);
  AparaB(A,B,v);
  
  return 0;
}