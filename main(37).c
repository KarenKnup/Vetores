#include <stdio.h>
#include <stdlib.h>

#define CAP 3

int menu (){
  int op;
  printf("\n------------ Menu de operações: ------------\n");
  printf("\t(1) Inserir elemento\n");
  printf("\t(2) Remover elemento\n");
  printf("\t(3) Alterar elemento\n");
  printf("\t(4) Buscar elemento\n");
  printf("\t(5) Exibir vetor\n");
  printf("\t(0) Sair\n");

  printf("\n\nEntre com a sua opção: ");
  scanf("%d",&op);

  return op;
}

int busca (int v[], int n, int quant){
  for(int i=0; i<quant; i++){
    if(v[i]==n){
      return i;
    }
  }
  return -1;
}

void exibe (int v[], int quant){
  if(quant==0){
    printf("\n\tVetor vazio!\n");
  } else {
    printf("\nVetor = ");
  for(int i=0; i<quant; i++){
    printf(" %d ",v[i]);
  }
  printf("\n");
  }
  
}

void Inverte (int *v, int i, int j){
  int temp;
  temp=v[i];
  v[i]=v[j];
  v[j]=temp;
}

void Ordenar (int *v, int quant){
  for(int i=0; i<quant; i++){
    for(int j=i+1; j<quant; j++){
      if(v[i] > v[j]){
        Inverte(v,i,j);
      }
    }
  }
}

void inserir (int *v, int n, int *quant){ 
  if (busca(v,n,*quant)==-1){//sem repetir
    if(*quant<CAP){
        *(v+*quant)=n;
      v=realloc(v,(*quant)+1);
      (*quant)++;
      Ordenar(v,*quant);//ordem crescente
    } else {
      printf("\n\tO vetor já está completamente preenchido!\n");
    }    
  } else {
    printf("\n\tEsse número já existe no vetor!\n");
  }
}

void remover (int *v, int n, int *quant){
  int *aux, x=0;
  
  if(busca(v,n,*quant)==-1){
    printf("\n\tEsse número não existe no vetor!\n");
  } else {
    if(*quant==1){//se tiver só 1 elemento
      free(v);
      *quant=0;
    } else {//mais de 1 elemento
        aux=calloc((*quant)-1,sizeof(int));
      
      for(int i=0; i<*quant; i++){
        if(i!=busca(v,n,*quant)){
          *(aux+x)=v[i];
          x++;
        }
      }
      
      v=realloc(v,(*quant)-1);
      
      for(int i=0; i<*quant-1; i++){
        v[i]=aux[i];
      }
      
      (*quant)--;
    }
  }
}

void altera (int v[], int quant, int n, int novo){
  if(busca(v,novo,quant)==-1){
    remover(v,n,&quant);
    inserir(v,novo,&quant);    
  } else {
    printf("\n\tEsse número já existe no vetor!\n");
  }
}

int main(void) {
  int *v, quant=0, op, n, novo;

      v=calloc(1,sizeof(int));

  do {
    op=menu();

    switch(op){
      case 1: printf("Elemento a ser adicionado: ");
              scanf("%d",&n);
              inserir(v,n,&quant);
      break;
      
      case 2: printf("Elemento a ser removido: ");
              scanf("%d",&n);
              remover(v,n,&quant);
      break;
      
      case 3: printf("Elemento a ser alterado: ");
              scanf("%d",&n);
              printf("Novo elemento: ");
              scanf("%d",&novo);
              altera(v,quant,n,novo);
      break;

      case 4: printf("Procurar elemento: ");
              scanf("%d",&n);
              printf("\nO elemento %d está na %dª posição do vetor.\n",n,busca(v,n,quant)+1);
      break;

      case 5: exibe(v,quant);
      break;
      
      case 0: printf("\n\nPrograma finalizado!");
      break;

      default: printf("\n\tOpção inválida! Tente novamente.\n");
    }
    
  } while(op!=0);
  
    return 0;
}