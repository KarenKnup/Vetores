#include <stdio.h>

//Mostrar quais valores do vetor recebido são maiores que a média. 

//-1 para parar

#define TAM 1000

int PreencheVetor (int v[]){
int i=1;

  printf("\n%dº número: ",i);
  scanf("%d",&v[i]);
  
while (v[i]!=-1){
  i++;
  printf("%dº número: ",i);
  scanf("%d",&v[i]);
}
  
  return i;
}

void ExibeVetor (int v[], int x){
  int i;

  for(i=1;i<x;i++){
    printf("\n\t\t%dº número é %d",i,v[i]);
  }
}

void MaiornoVetor(int x, int v[]){
  int i,s=0,m,maior;

  for(i=1;i<x;i++){
    s+=v[i];
  }
    m=s/(x-1);
  printf("\n\nA média dos números vale %d",m);

    printf("\nValores maiores que a média: ");
  for (i=1;i<x;i++){
    if (v[i]>m){
      maior=v[i];
      printf("%d  ",maior);
    }
  }
}

int main(void) {
int v[TAM],x;

  x=PreencheVetor(v);
  ExibeVetor(v,x);

  MaiornoVetor(x, v);
  
  return 0;
}