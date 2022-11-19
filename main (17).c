#include <stdio.h>

//Desenvolver uma função que , dado um vetor de inteiros v, determine a quantidade de elementos de v que pertençam ap intervalo [a,b]

/*
int verificaIntervalo(int vetor[], int tamanho, int a, int b){
int i, cout=0;

for(i=0;i<tamanho;i++){
    if ((vetor[i]>=a) && (vetor[i]<=b)){
      cout++; == cout=cout+1
    }
  }

  return cout;
}
  */

int V (int v[], int a, int b){
  int i, n=0;
for (i=1;i<=10;i++){
    if ((v[i]>=a) && (v[i]<=b)){
      n++; //se estiver no intervalo, conta+1
    }  
  }
  return n;
}

int main(void) {
int v[10]={5,8,4,5,3,11,3,6,4,7}, a=5, b=8; //5,6,7 e 8

  printf("\n");
 
printf("\nHá %d números no intervalo [a,b] = [5,8]", V(v,a,b));
  
  /*
//Declaração de variáveis 
int vetor1[100],vetor2[50];
int inf=0, sup=20, quant1, quant2;

//Preenchendo os vetores
preencherVetor(vetor1,100);
preencherVetor(vetor2,50);

//Chamando a função
quant1=verificaIntervalo(vetor1,100,inf,sup);
quant2=verificaIntervalo(vetor2,50,inf,sup);

//Exibindo os resultados
printf("foram encontrados %d elementos do vetor 1 no intervalo [%d,%d]\n",quant1,inf,sup);

printf("foram encontrados %d elementos do vetor 1 no intervalo [%d,%d]\n",quant2,inf,sup);
    */
  
    return 0;
}