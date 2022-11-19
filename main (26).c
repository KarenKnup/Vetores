#include <stdio.h>

/*
  Fazer um função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na intersecção dos dois primeiros.

Nota: considerar que não existe repetição no
conjunto A, nem no conjunto B.
  */

#define t 4

//--------------MODO 1 --------------------
int busca (int x, int v[]){//busca número x no vetor
  int i;
 
  for(i=0; i<t; i++){
    if (x==v[i]){
      return 1;
    }
  }
  return 0;
}

void New (int A[], int B[]){
 int i,n=0,pos, C[n];

  printf("\nModo 1 ---- VETOR C: ----\n");
  for (i=0; i<t; i++){
    pos=busca(A[i],B);
    if (pos==1){ //procura o item de A em todo B
      printf("%d ",A[i]);
    }
  }
}

//--------------MODO 2 --------------------


void informaAB(int *n1,int *n2){
  printf("Digite o tamanho do vetor A: ");
  scanf("%d",n1);
  printf("Digite o tamanho do vetor B: ");
  scanf("%d",n2);
}

void geraVetorAB(int n1,int n2,int v1[],int v2[]){
  int i;
  for(i=0;i<n1;i++){
    printf("Digite o %dº elemento do vetor A: ",i+1);
    scanf("%d",&v1[i]);
  }
  for(i=0;i<n2;i++){
    printf("Digite o %dº elemento do vetor B: ",i+1);
    scanf("%d",&v2[i]);
  }
}


int verifMenor(int n1,int n2){
  if(n1>n2||n1==n2)
    return n2;
  else
    return n1;
}

int buscaNum(int n,int p,int v[]){
  int i;
  for(i=0;i<n;i++){
    if(v[i]==p)
      return i;
  }
  return -1;
}

void imprVetor(int n,int v[]){
  int i;
  for(i=0;i<n;i++)
    printf("%d ",v[i]);
}

void interAB(int n1,int n2,int v1[],int v2[],int v[]){
  int i,pos,k=0;
  for(i=0;i<n1;i++){
    pos=buscaNum(n2,v1[i],v2);
    if(pos!=-1){
      v[k]=v2[pos];
      k++;
    }
  }
  printf("\nVetor de interseção:\n");
  imprVetor(k,v);
}

int main(void) {
int A[t]={1,2,3,4}, B[t]={2,3,5,6}; //2 e 3
  New(A,B);



  
  printf("\n\n\nModo 2 ---- VETOR C: ----\n");
int nC,nD,nCID;
  informaAB(&nC,&nD);
  
  int C[nC],D[nD],CID[verifMenor(nC,nD)];
  geraVetorAB(nC,nD,C,D);
  interAB(nC,nD,C,D,CID);
  
  return 0;
}