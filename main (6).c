#include <stdio.h>

//Exiba os elementos  de um vetor recebido  das posições pares seguidos das posições ímpares 

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

void Par (int x, int v[]) {
   int i;
  for(i=0;i<x;i+=2){
    printf("%d ",v[i]);
  }
}

void Impar (int x, int v[]) {
   int i;
  for(i=1;i<x;i+=2){
    printf("%d ",v[i]);
  }
}

int main(void) {
int v[TAM],x;
  
    printf("\n\n------- VETOR: -------\n");
x=PreencheVetor(v);
ExibeVetor(x,v);
  
   printf("\n\n------- RESULTADOS: -------\n");
Par (x,v);
Impar (x,v);
  
    return 0;
}