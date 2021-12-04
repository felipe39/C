#include<stdio.h>
/*Programa que ler números inteiros até que sejá digitado um número negativo*/
int main(){
  int numero, i = 0;

  printf("Digite um número: ");
  scanf("%d",&numero);
    while(numero >= 0){

      printf("Digite um número: ");
      scanf("%d",&numero);
      if(numero >= 0)

      i++;
    }
    printf("Quantidade de números lidos: %d \n",i);
}
