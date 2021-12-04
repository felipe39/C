#include<stdio.h>
/*Programa que ler números inteiros até que sejá digitado um número negativo*/
int main(){
  int numero, quantidade;
  numero = quantidade = 0;
     while(numero >= 0){

      printf("Digite um número: ");
      scanf("%d",&numero);
      if(numero >= 0)

      quantidade++;
    }
    printf("Quantidade de números lidos: %d \n",quantidade);
}
