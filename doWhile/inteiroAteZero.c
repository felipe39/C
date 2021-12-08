#include<stdio.h>
/*
*Autor: Felipe Falcão
*Data:  08/12/2021
*
*Programa que  lê números inteiros até que sejá zero. No final mostra
*Os números positivos e negativos.
*********/
int main(){
  int numero, somaPositivo, somaNegativo;
  somaPositivo = somaNegativo = 0;

      /*Comando doWhile, sem préteste*/
    do{

      scanf("%d",&numero);
      if(numero > 0)
        somaPositivo = somaPositivo + numero;
      else
        somaNegativo = somaNegativo + numero;

    }while(numero != 0);

    printf("Soma dos número positivos:  %d\n",somaPositivo);
    printf("SOma dos números negativos: %d\n",somaNegativo);
}
