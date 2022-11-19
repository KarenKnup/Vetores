#include <stdio.h>
/*
  Desenvolver uma função que remova
determinado elemento (todas as suas
ocorrências) de um vetor de float. Ao final,
retornar o número de remoções realizadas.
  */

void Remove (float n, float v[]){
  int i;

  printf("\n");
  for(i=0; i<5; i++){
    if (v[i]!=n){
      printf("%.1f ",v[i]);
    }    
  }
}

int main(void) {
//int n=2, v[5]={1,2,2,3,4}; //1 3 4
  float n=2.6, v[5]={1.5,2.6,2.6,3.8,4.9};

  Remove(n,v);
  
  return 0;
}