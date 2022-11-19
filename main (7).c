#include <stdio.h>

#define TAM 1000

//Recebe um vetor, perguntar ao usuário o número de posição desejada e exibir o valor da posição. Término: valor de posição inválida 

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

void Valor(int x, int v[]){
  int n;
  printf("\nDigite o número de posição desejada:   0 para terminar.   ");
  scanf("%d",&n);
  while(n>0 && n<x){
    printf("O valor da %dª posição é %d",n,v[n]);
    printf("\n\nDigite o número de posição desejada:   0 para terminar.   ");
    scanf("%d",&n);
  }
}

int main(void) {
int v[TAM],x;

    printf("\n\n------- VETOR: -------\n");
x=PreencheVetor(v); //x=qtde de numeros no vetor v
ExibeVetor(x,v);
  
   printf("\n\n------- RESULTADOS: -------\n");
  Valor(x,v);
  
  return 0;
}