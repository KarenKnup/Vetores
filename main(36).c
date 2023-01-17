/*
    SELECTION SORT
*/

#include <stdio.h>

void swap (int *xp, int *yp){
  int temp=*xp;
  *xp=*yp;
  *yp=temp;
}

void selectionSort (int v[], int n){
  int i,j,min_indx;
  for(i=0; i<n-1; i++){
    min_indx=i;
    for(j=i+1; j<n; j++){
      if(v[j]<v[min_indx]){
        min_indx=j;
      }
      if(min_indx!=i){
        swap(&v[min_indx],&v[i]);
      }
    }
  }
}

void ExibeVetor (int v[], int tam){
  int i;
  for(i=0; i<tam; i++){
    printf("%d ",v[i]);
  }
}

int main(void) {
  int v[]={4,1,5,3,2}, n=sizeof(v)/sizeof(v[0]);

  selectionSort(v,n);
  printf("\nSorted Array = ");
  ExibeVetor(v,n);
  
  return 0;
}