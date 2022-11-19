#include <stdio.h>

void preencheVetor (int valores[],int TAM){
  int i;
  for (i=0;i<TAM;i++){
    printf("Qual o %dº valor?   ",i+1);
    scanf("%d",&valores[i]);
  }
}

void exibeVetor (int valores[], int TAM){
  int i;
  for (i=0;i<TAM;i++){
    
    printf("\n     O %dº valor é %d",i+1,valores[i]);
  }
}

void Multiplica(int v1[], int v2[],int TAM) {
  int i, multiplicacao, soma_m=0;
  for (i=0;i<TAM;i++){
        multiplicacao=v1[i]*v2[i];
    printf("\nA %dª multiplicação vale %d",i+1,multiplicacao);
        soma_m+=multiplicacao; 
  }
    printf("\n\nX.Y = x1.y1+x2.y2 ... = %d",soma_m);

}


int main(void) {
int TAM;

  printf("\nQuantos números?   ");
  scanf("%d",&TAM);

int x[TAM],y[TAM];
  printf("\n\n------- VETOR X: -------\n");
preencheVetor(x,TAM);
exibeVetor (x,TAM);
   printf("\n\n------- VETOR Y: -------\n");
preencheVetor(y,TAM);
exibeVetor (y,TAM);
 printf("\n\n------- RESULTADOS: -------\n");
Multiplica(x,y,TAM);
  
  return 0;
}