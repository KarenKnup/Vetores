#include <stdio.h>

//Crie um programa que contenha um array (vetor) de float contendo 10 elementos. Imprima o endereço de cada posição desse array. 

#define TAM 10

int PreencheVetor (int v[]){
  int i=1;
  
  printf("Qual o %dº valor?",i);
  scanf("%d",&v[i]);
  
  while (v[i]>0 && i<TAM){ 
      i++;
    printf("Qual o %dº valor?",i);
  scanf("%d",&v[i]);
   
 }
    
  return i;
}

void ExibeVetor (int x,int v[]){
  int i;
  
  for(i=1;i<=x;i++){
   printf("\n     O %dº valor é %d",i,v[i]);
  }
}

void ExibeEndereço (int x, int v[]) {
  int i;

  for (i=1;i<=x;i++){
  printf("\nO %dº endereço é %d",i,&v[i]);
    }
}

int main(void) {
int v[TAM],x;

    printf("\n\n------- VETOR: -------\n");
x=PreencheVetor(v);
ExibeVetor(x,v);

    printf("\n\n------- RESULTADOS: -------\n");
ExibeEndereço(x,v);
  
  return 0;
}