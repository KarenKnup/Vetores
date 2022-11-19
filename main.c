#include <stdio.h>
/*
VETOR - variável que armazena várias variáveis 
  */
#define TAM 5
void preencheVetor(int v[]){
  int i;
  for(i=0;i<TAM;i++){
    printf("\n\tDigite a resposta da Q%d",i+1);
    scanf("%d", &v[i]);
  }
  return;
}
void exibeVetor(int v[]){
  int i;
  for(i=0;i<TAM;i++){
    printf("\nQ%d: %d",i+1,v[i]);
    
  }
  return;
}

int corrige(int vGab[], int vResp[]){
  int acertos=0;
  int i;
  for(i=0;i<TAM;i++){
    if (vGab[i]==vResp[i]){
      acertos+=2;
    }
  }
  return acertos;
  
}
int main() {
  
  int vGab[TAM];
  int vResp[TAM];
  int al;
  int nota;
  printf("\n************G A B A R I T O *************\n");
  preencheVetor(vGab);
  // exiba o gabarito
  exibeVetor(vGab);
  
  //Correção das provas de 3 alunos
  for(al=1;al<=3;al++){
    printf("\n****************************\n");
    printf("\nCorreção da prova do aluno %d\n",al);
    preencheVetor(vResp);
    nota=corrige(vGab,vResp);
    printf("\nNota do aluno %d: %d",al,nota);
    printf("\n****************************\n");
    
  }
  
  return 0;
}