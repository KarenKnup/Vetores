#include <stdio.h>

#define VETOR 10

/* Função utilizada para preencher os espaços de um vetor com até VETOR espaços. A função termina quando é preenchido um índice igual a zero.*/
int preencheVetor(int vetor[]){
  int i=0;
  printf("Digite o %dº elemento do vetor ou 0 para terminar: ",i+1);
  scanf("%d",&vetor[i]);
  while(vetor[i]!=0&&i<VETOR-1){
    i++;
    printf("Digite o %dº elemento do vetor ou 0 para terminar: ",i+1);
    scanf("%d",&vetor[i]);
  }
  return i;
}

/* Função que exibe o vetor preenchido na função preencheVetor. Requer o vetor e a sua dimensão, que pode ser inferior a VETOR. */
void exibeVetor(int j, int vetor[]){
  int i;
  printf("\nVetor:\n");
  for(i=0;i<j;i++)
    printf("%d ",vetor[i]);
}

void verificaMenor(int j, int vetor[]){
  int i;
  printf("\nValores menores que a última posição do vetor: ");
  for(i=0;i<j;i++){
    if(vetor[i]<vetor[j-1])
      printf("%d ",vetor[i]);
  }
}

int main(void) {
  int j,vetor[VETOR];
  j=preencheVetor(vetor);
  exibeVetor(j,vetor);
  verificaMenor(j,vetor);
  return 0;
}