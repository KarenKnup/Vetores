#include <stdio.h>
/*
  Dados um vetor de reais (cujos elementos
estão ordenados crescentemente) e um
número x, retornar a posição da primeira
ocorrência de x (caso encontre-se no vetor) ou
a posição na qual deveria estar (caso contrário).
*/

int Pos (int v[], int x){
    int i;

  for (i=0; i<6; i++){
    if (v[i]==x){ //v[1]=2 -> i(1)=2 -1
      return i;
    } else {
     return x-1;
    }
  }
}

int main(void) {
int v[6]={1,2,3,4,5,6}, x=7; 
  //2 está na pos 1
  //v[1]=2 -> v[i]=i+1 
 printf("\n\tO número %d está na posição %d",x,Pos(v,x));
  
  return 0;
}