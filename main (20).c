#include <stdio.h>

#define TAM 30

/*
  Elaborar uma função que, dado um conjunto de
300 valores inteiros, distribua-os em 2 vetores
conforme forem pares ou ímpares.
*/

/*
void Vetor (int v[]){
  int i, n=1;

  v[0]=0;
  printf("\n------ VETOR: -----\n");
  for (i=1; i<=TAM; i++){ // 0 1 2 3 4 
                          //v[1]=v[0]+1 -> 1=0+1
      v[i]=v[i-1]+1;
    printf("%d ",v[i]);
    }

  printf("\n\n------ PARES: -----\n");
  for (i=0; i<=TAM; i++){
    if (v[i]%2==0){ //Pares
      printf("%d ",v[i]);
      }
    }

    printf("\n\n------ ÍMPARES: -----\n");
  for (i=0; i<=TAM; i++){
    if (v[i]%2!=0){ //Ímpares
      printf("%d ",v[i]);
      }
    }
  }
*/

void Vetor (int v[]){
  int i, p, np, v2[p], v3[np];

  v[0]=0;
  printf("\n------ VETOR: -----\n");
  for (i=1; i<=TAM; i++){ // 0 1 2 3 4 
                          //v[1]=v[0]+1 -> 1=0+1
      v[i]=v[i-1]+1;
    printf("%d ",v[i]);
    }

  printf("\n\n------ PARES: -----\n");
  for (i=0, p=0; i<=TAM; i++, p++){
    if (v[i]%2==0){ //Pares
      v2[p]=v[i];
      printf("%d ",v2[p]);
      }
    }

  printf("\n\n------ ÍMPARES: -----\n");
  for (i=0, np=0; i<=TAM; i++, np++){
    if (v[i]%2!=0){ //Ímpares
      v3[np]=v[i];
      printf("%d ",v3[np]);
      }
    }
  
  }

int main(void) {
int v[TAM];

  Vetor (v);
  
  
  return 0;
}