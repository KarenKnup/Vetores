#include <stdio.h>

#define TAM 1000

//Mostrar o maior valor armazenado de um vetor recebido.   

int PreencheVetor (int v[]){
  int i=1;
  
  printf("Qual o %dº valor?   0 para terminar.   ",i);
  scanf("%d",&v[i]);
  
  while (v[i]!=0 && i<TAM-1){ 
      i++;
    printf("Qual o %dº valor?   0 para terminar.   ",i);
  scanf("%d",&v[i]);
   
 }
    return i;
}

void ExibeVetor (int x,int v[]){
  int i;
  
  for(i=1;i<x;i++){
   printf("\n     O %dº valor é %d",i,v[i]);
  }
}

void Maior(int x,int v[]){
  int i,maior=v[1];
  
  for(i=2;i<x;i++){
    if(maior<v[i])
      maior=v[i];
  }
  printf("\nO maior valor do vetor é %d",maior);
}

int main(void) {
int v[TAM],x;

    printf("\n\n------- VETOR: -------\n");
x=PreencheVetor(v);
ExibeVetor(x,v);
  
    printf("\n\n------- RESULTADOS: -------\n");
Maior(x,v);
  
  return 0;
}