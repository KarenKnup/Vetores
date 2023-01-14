#include <stdio.h>

/*
  BUBBLE SORT
  */

#define TRUE 0
#define FALSE 1

void troca (int *n1, int *n2){
  int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}

void BubbleSort (int n, int v[]){
  int i, j, ja_trocado;

  for(i=0; i<n-1; i++){
    ja_trocado=FALSE;
    for(j=0; j<n-i-1; j++){
      if(v[j] > v[j+1]){
        troca(&v[j],&v[j+1]);
        ja_trocado=TRUE;
      }
    }
    if(ja_trocado==FALSE){
      break;
    }
  }
}

void ExibeVetor (int n, int v[]){
  printf("\nVETOR = ");
  for(int i=0; i<n; i++){
    printf("%d ",v[i]);
  }
}

int main(void) {
  int n=7, v[]={10,30,81,63,84,84,2};

  BubbleSort(n,v);
  ExibeVetor(n,v);

  
  return 0;
}