#include <stdio.h>
#include <string.h>
/*
Faça um programa que permaneça lendo valores até que o valor 0 seja digitado. Para cada número digitado, o programa deve exibir a quantidade de vezes que o mesmo foi informado em sequência.

Exemplo:
  Números fornecidos: 1 1 1 6 6 2 3 3 1 1 4 7 7 0
  Saída do programa: 1 - 3 vezes
                     6 - 2 vezes
                     2 - 1 vezes
                     3 - 2 vezes
                     1 - 2 vezes
                     4 - 1 vezes
                     7 - 2 vezes

  */

#define T 10000

int main(void) {
int n[T], i=0, cont=1;

  printf("\nNúmero: ");
  scanf("%d",&n[i]);
  
  while (n[i]>0){
    i++;
    printf("\nNúmero: ");
    scanf("%d",&n[i]);
    if (n[i]==n[i-1]){
      cont++;
    } else{
      printf("\n\t\t %d = %d vezes",n[i-1],cont);
      cont=1;
    }
  }

  
  return 0;
}