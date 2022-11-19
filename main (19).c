#include <stdio.h>
/*
  Fazer uma função que armazene em um vetor
os 50 primeiros termos da seguinte sequência:
S = 1, 2, 4, 7, 11, 16, ...

Nota: observem que a diferença entre o 1o e 2o
elementos é igual a 1, entre o 2o e 3o é igual a
2, entre o 3o e o 4o é igual a 3, e assim
sucessivamente.
*/

#define TAM 50

void vetor (int v[]){// 1 2 4 7 11 16
  int i, n=1;

  v[0]=1;
  for (i=0; i<TAM; i++){
    v[i+1]=v[i]+n; //2=1+1
      n++;
  }
}

void Exibe (int v[]){
  int i;

  for (i=0; i<TAM; i++){
    printf("%d ",v[i]);
  }
}

int main(void) {
int v[TAM];

  printf("\n--- Vetor: ---\n");
  vetor(v);
  Exibe(v);
  
  return 0;
}