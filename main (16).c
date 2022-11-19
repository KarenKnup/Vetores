#include <stdio.h>

//Retornar o número da posição do vetor recebido que armazena um valor também recebido.

#define TAM 1000

int PreencheVetor (int v[]){
  int i=1;
  
  printf("\nQual o %dº número?  (-1 para parar)  ",i);
  scanf("%d",&v[i]);
  
  while (v[i]!=-1){
    i++;
    printf("Qual o %dº número?  (-1 para parar)  ",i);
  scanf("%d",&v[i]);
}  

  return i;
}

void ExibeVetor(int v[], int x){
 int i;

  for (i=1;i<x;i++){
    printf("\n\tO %dº número é %d",i,v[i]);
  }
}


int consultaPosicao(int n,int x,int v[]){
  int i,pos=-1;
  for(i=1;i<x;i++){
    if(v[i]==n)
      pos=i;  
  }
  return pos;
}

void retornaConsulta(int x,int v[]){
  int i,n,pos;
  printf("\n\nDigite o valor a ser consultado: ");
  scanf("%d",&n);
  pos=consultaPosicao(n,x,v);
  while(pos!=-1){
    printf("\n\tPosição do valor: %d",pos);
    printf("\n\nDigite o valor a ser consultado: ");
  scanf("%d",&n);
  pos=consultaPosicao(n,x,v);
    }
  }

int main(void) {
int v[TAM],x;

  x=PreencheVetor(v);
  ExibeVetor(v,x);
  retornaConsulta(x,v);
  
  return 0;
}