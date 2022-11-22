#include <stdio.h>


void vetorOrdenado (int v[]){//ordem crescente
 int aux, i, j;

  for (i=0; i<5; i++){
    for (j=i+1; j<5; j++){
      if (v[i]>v[j]){
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
      }
    }
  }
}

void ExibeVetor (int v[]){
  int i;
  
  for(i=0;i<5;i++){
   printf("\n     O %dº valor é %d",i+1,v[i]);
  }
}

int main(void) {
  int vetor [5]={5,4,3,2,1};

  vetorOrdenado(vetor);
  ExibeVetor(vetor);
  
  return 0;
}