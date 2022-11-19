#include <stdio.h>
/*
  Implementar a função de inserção de
determinado elemento em um vetor ordenado
crescentemente (dica: utilizar a função do item
08 para auxiliar).
  */

#define TAM 6 

int Pos (int v[], int x){//Posição de x em v
    int i;

  for (i=0; i<TAM; i++){
    if (v[i]==x){ //v[1]=2 -> i(1)=2 -1
      return i;
    } else {
     return x-1;
    }
  }
}

void ColocaNum (int v[], int x){
  int i, pos=Pos(v,x), v2[TAM], n=0;

  for(i=0; i<TAM; i++){
    v2[i]=v[i];
    n++;//conta itens de v2
  }

  if(v[pos]==x){//se x estiver em v
    for(i=pos;i<TAM;i++){
      v2[i]=v[i];
      n++;
    }
  }
  else{//se não estiver
    v2[pos]=x;
    n++;
    for(i=n;i<TAM+1;i++){
      v2[i]=v[i-1];
      n++;
    }
  }


  printf("\n--- VETOR ORIGINAL: ---\n");//v[i]
  for(i=0; i<TAM; i++){
      printf("%d ",v[i]);
  }

  printf("\n\n--- VETOR ORIGINAL com X: ---\n");//v2[i]
  for(i=0;i<n;i++){
   printf("%d ",v2[i]); 
  } 
}

int main(void) {
int v[6]={1,2,3,4,5,6}, x=7;

  ColocaNum(v,x);
    
  return 0;
}