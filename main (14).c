#include <stdio.h>

//Mostrar quantos valores do vetor recebido são menores que a média. 

//-1 para

  #define TAM 1000

int PreencheVetor(int v[]){
int i=1;

  printf("\n%dº valor:  ",i);
  scanf("%d",&v[i]);
    while (i<TAM-1 && v[i]!=(-1)){
      i++;
      printf("%dº valor:  ",i);
  scanf("%d",&v[i]);
    }

  
  return i;
}

void MostraVetor (int v[], int x){
  int i;

  for(i=1;i<x;i++){
    printf("\n\t\t%dº valor é %d",i,v[i]);
  }
}

void MenorqueMedia(int v[], int x){
  int i,s=0,m,menores=0;
    for (i=1;i<x;i++){
      s+=v[i];
    }
      m=s/(x-1);
    printf("\n\n A média vale %d",m);

  if (v[i]<m){
    menores++;
  }
  printf("\n\n%d números são menores que a média",menores);
}

int main(void) {
int v[TAM],x;

  x=PreencheVetor(v);
  MostraVetor(v,x);

  MenorqueMedia(v, x);
  
  return 0;
}