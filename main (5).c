#include <stdio.h>

// Exiba um vetor recebido  na ordem inversa.

#define TAM 1000

int PreencheVetor (int v[]){
  int i=0;
  
  printf("Qual o %dº valor?   0 para terminar.   ",i+1);
  scanf("%d",&v[i]);
  
  while (v[i]!=0 && i<TAM-1){ 
      i++;
    printf("Qual o %dº valor?   0 para terminar.   ",i+1);
  scanf("%d",&v[i]);
   
 }
    return i;
}

void ExibeVetor (int x,int v[]){
  int i;
  
  for(i=0;i<x;i++){
   printf("\n     O %dº valor é %d",i+1,v[i]);
  }
}

void InverteVetor (int x, int v[]){
int i,a=x-1,z=0;
  for(i=0;i<x/2;i++){
    z=v[i];
    v[i]=v[a];
    v[a]=z;
    a--;
  }
  
}

int main(void) {
int v[TAM], x;

    printf("\n\n------- VETOR: -------\n");
x=PreencheVetor(v);
ExibeVetor(x,v);
  
   printf("\n\n------- RESULTADOS: -------\n");
InverteVetor(x,v);
ExibeVetor(x,v);

  return 0;
}