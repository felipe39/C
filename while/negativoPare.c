#include<stdio.h>
/*Programa que ler números inteiros até que sejá digitado um número negativo*/
int main(){
  int numero, i = 0;

    do {

      printf("Digite um número: ");
      scanf("%d",&numero);
      if(numero >= 0)

      i++;
    }while(numero >= 0);
    printf("Quantidade de números lidos: %d \n",i);
}
