#include <stdio.h>
/*
  Fazer um função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na união dos dois primeiros.

Nota: considerar que não existe repetição no
conjunto A, nem no conjunto B.
  */

#define t 4

void New (int A[], int B[]){
  int i,j,n=0, C[t*2];

  for(i=0; i<t; i++){//i - contador de A/inicial
    C[i]=A[i];
    n++;//conta itens de A p/ começar o B
  }

  for (j=n, i=0; j<t*2; j++, i++){// j - contador de B
    C[j]=B[i];
  }

  printf("\n---- VETOR C: ----\n");
  for(i=0; i<t*2; i++){
    printf("%d ",C[i]);
  }
}

int main(void) {
  
 int A[t]={1,2,3,4}, B[t]={5,6,7,8};

  New(A,B);
  
  return 0;
}