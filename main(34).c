/*
SORT INSERTION
*/

#include <stdio.h>

void swap (int *x, int *y){
  int temp=*x;
  
  *x=*y;
  *y=temp;
}

void insertion (int v[], int n){
  int i,j,x;

  for(i=1; i<n; i++){
    j=i-1;
    x=v[i];
    while(j>-1 && v[j]>x){
      v[j+1] = v[j];
      j--;
    }
    v[j+1] = x;
  }
}

int main(void){
  int v[]={11,13,7,12,5}, n=5, i;

  insertion(v,n);

  printf("\nVETOR =  ");
  for(i=0; i<5; i++){
    printf("%d\t",v[i]);
  }

  return 0;
}
