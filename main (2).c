#include <stdio.h>

void Multiplica(int v1[], int v2[]){
  int i, multiplicacao=0;
  for (i=0;i<7;i++){
        multiplicacao+=v1[i]*v2[i];
  }
    printf("Produto Interno = %d",multiplicacao);

}

int main(void) {
//variaveis
int v1[10]={3,1,5,3,7,6,8,5,9,4};
  int v2[10]={5,2,6,4,7,1,1};
	int qt1=10,qt2=7;

 Multiplica(v1,v2);
  
  
    return 0;
}