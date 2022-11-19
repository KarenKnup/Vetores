#include <stdio.h>
//1. Captura os valores do teclado e armazenando-os em um vetor. 
#define TAM 5

void preencheVetor (int valores[]){
  int i;
  for (i=0;i<TAM;i++){
    printf("Qual o %dº valor?   ",i+1);
    scanf("%d",&valores[i]);
  }
}

void exibeVetor (int valores[]){
  int i;
  for (i=0;i<TAM;i++){
    
    printf("\n     O %dº valor é %d",i+1,valores[i]);
  }
}

int main(void) {
//Variaveis
int valores[TAM];
  
  //Usuario
  printf("\n");
  
preencheVetor(valores);
  
  //Calculos e resultados
  printf("\n__________________________________________");
  exibeVetor(valores);
  printf("\n__________________________________________");

  return 0;
}