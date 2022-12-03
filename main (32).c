
//Karen da Mota Knup
//Método de ordenação - Quick Sort

#include <stdio.h>

int particiona (int V[], int inicio, int fim){ 
  int esq, dir, pivo, aux;
    esq=inicio+1;
    dir=fim;
    pivo=V[inicio];
    
  do{
  //Avançando a posição da esquerda
    while(V[esq]<=pivo){
      esq++;
    }
  //Recuando a posição da direita
    while(V[dir]>pivo){
      dir--;
    }
    
  //Trocando esquerda e direita
    if(esq<dir){
      aux=V[esq];
      V[esq]=V[dir];
      V[dir]=aux;
    }
  } while (esq < dir);

	//Os elementos já foram movimentados e trocados de lugar
  aux=V[inicio];
  V[inicio]=V[dir]; //onde a direita parar coloca no lugar do inicio
  V[dir]=aux; //a direita se torna o pivo (pivo=V[inicio])

  return dir; //o retorno da função vai ser a "dir", que vai ser o pivo na quickSort
}

void quickSort (int V[], int inicio, int fim){
  int pivo;
  
    if(inicio<fim){
      //Escolhendo o "pivo" e dividindo os dados em 2 partições (partes)
      pivo=particiona(V,inicio,fim);
      
      //Chamando a função para as 2 metades
      quickSort(V,inicio,pivo-1);
      quickSort(V,pivo+1,fim);

      //Esse processo continua enquanto o fim for maior que o começo
    }
}

int main(void){
    int V[] = {5,50,25,40,20,30}, i=6;
    int n =6;
    

  printf("\n----------ANTES----------\n");
  printf("Vetor = ");
  for (int i = 0; i < n; i++){
        printf("%d\t", V[i]);
    }

printf("\n\n\n----------DEPOIS DO QUICK SORT----------\n");
  quickSort(V,0,n-1); //inicio=v[0] e fim=v[5]
  
  printf("Vetor = ");
  for (int i = 0; i < n; i++){
        printf("%d\t", V[i]);
    }
  
    return 0;
}