#include <stdio.h>

#define TAM 1000

//Contar quantos números ímpares tem em um vetor recebido. 

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

int Conta_Impar (int x, int v[]){
  int i,impares=0;
  
  for(i=1;i<x;i++) {
    if (v[i]%2==1){
      impares++;
      }
    }
  
  return impares;
}

int main(void) {
int v[TAM],x;
  
    printf("\n\n------- VETOR: -------\n");
x=PreencheVetor(v);
ExibeVetor(x,v);
  
    printf("\n\n------- RESULTADOS: -------\n");
printf("\n\nTem %d números ímpares no vetor.",Conta_Impar(x,v));
  
  return 0;
}