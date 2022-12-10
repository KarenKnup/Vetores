#include <stdio.h>

/*
Faça um programa em C que permita informar a quantidade de ocorrências de cada número entre 20 e 30.

um contador por número🡪 11 contadores 🡺 vetor de contadores

  */

#define tam 50

void zeraCont (int cont[]){
  for(int i=0; i<11; i++){
    cont[i]=0;
  }
}

void exibeCont (int cont[]){
  printf("\nVetor = ");
  for(int i=0; i<11; i++){
    printf("%d ",cont[i]);
  }
}

int busca (int v[], int num){
  int qtde=0;

  for(int i=0; i<tam; i++){
    if (v[i] == num){
      qtde++;
    }
  }

  return qtde;
}

void Func (int v[], int cont[]){
  int num=20, c=0, qtde=0;

  while(num<=30){
    for(int i=0; i<11; i++){
        cont[c]=busca(v,num);
      }
    c++;
    num++;
    }
  
}

void exibe (int cont[]){
  int n=20;
  for(int i=0; i<11; i++){
    printf("\nNúmero %d: apareceu %d vezes\n",n,cont[i]);
    n++;
  }
}

void preencheVetor (int v[]){
  int i;
  
  printf("\nDigite um número (0 para parar): ");
  scanf("%d",&v[0]);
  
  if(v[0]!=0){
  for(i=1; i<tam; i++){
       printf("\nDigite um número (0 para parar): ");
       scanf("%d",&v[i]);
          if(v[i]==0){
            break;
            }
      }
    }
}

int main(void) {
  int v[tam], cont[11];

  preencheVetor(v);
  zeraCont(cont);
  Func(v,cont);
  //exibeCont(cont);
  printf("\n\n------------- RESULTADO ------------\n");
  exibe(cont);
  
  
  return 0;
}