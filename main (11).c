#include <stdio.h>

#define TAM 5 

void Preenche(int v[]){
  int i;
  for (i=1;i<=TAM;i++){
    printf("Qual a %dª resposta?   ",i);
    scanf("%d",&v[i]);
  }
}

int Compara (int G[], int A[]){
  int i, n=0;
  for (i=1;i<=TAM;i++){
    if (G[i]==A[i]){ //Acertos
      n+=2; //ganha 2 pontos por acerto
     }  
  }
   return n;
}

int Acertos (int G[], int A[]){
  int i, a=0;
  for (i=1;i<=TAM;i++){
    if (G[i]==A[i]){ //Acertos
      a++; //ganha 2 pontos por acerto
     }  
  }
   return a;
}

void Exibe (int v[]){
  int i;
  for (i=1;i<=TAM;i++){
    printf("\n\t\tA %dª resposta é:  %d",i,v[i]);
  }
}

int main(void) {
int Gab[TAM],Al[TAM];

printf("\n----- Preenche Gabarito: -----\n");
Preenche(Gab);
Exibe(Gab);
  
printf("\n\n----- Preenche Respostas do aluno: -----\n");
Preenche(Al);
Exibe(Al);
  
printf("\n\n----- Calcula Nota: -----\n");
   printf("\nA nota do aluno foi: %d\nForam feitos %d acertos.",Compara(Gab,Al),Acertos(Gab,Al));
  
  return 0;
}