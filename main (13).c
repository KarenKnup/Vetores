#include <stdio.h>
//Mostrar a média dos valores armazenados no vetor recebido. 

//-1 para parar

#define TAM 1000

int PreencheVetor(int v[]){
int i=1;

  printf("%dº valor:  ",i);
  scanf("%d",&v[i]);
    while (v[i]!=(-1) && i<TAM-1){
      i++;
       printf("%dº valor:  ",i);
  scanf("%d",&v[i]);
      
    }
  
  return i;
}

void MostraVetor (int v[], int x){
  int i;

  for (i=1;i<x;i++){
    printf("\n\t\t%dº valor: %d",i,v[i]);
    }
}

void CalculaMedia (int v[], int x){
  int i,s=0,m;

  for(i=1;i<x;i++){
    s+=v[i];
  }

    m=s/(x-1);
  
  printf("\n\n A média dos valores é %d",m);
}


int main(void) {
int v[TAM], x;

  printf("\n");
x=PreencheVetor(v);
  MostraVetor(v,x);

  CalculaMedia(v,x);
  
    return 0;
}