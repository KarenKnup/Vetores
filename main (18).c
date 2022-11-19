#include <stdio.h>
/*
Implementar uma função que, dado um vetor
de reais, troque o 1º e o 2º elementos, em
seguida o 3º e o 4º elementos e assim
sucessivamente, até se chegar ao final do vetor.
  */

void TrocaElementos (int v[]){
  int i,x; //v[4]=1,2,3,4

  for(i=0; i<4; i+=2){
    if (v[i+1]!=0){
    x=v[i]; //x=1
    v[i]=v[i+1]; //1 vira 2
    v[i+1]=x; //2 vira 1
      
      //pula 2 casas i=0+2=2 -> pula pro v[2]=3
      }
  }
}

void Exibe (int v[]){
  int i;

  for (i=0; i<4; i++){
    printf("%d ",v[i]);
  }
}

int main(void) {
int v[4]={1,2,3,4}; //v[4]={2,1,4,3}

  printf("\n--- Vetor normal: ------\n");
  Exibe (v);
  
  printf("\n\n--- Vetor invertido: ------\n");
  TrocaElementos(v);
  Exibe (v);
  
  return 0;
}