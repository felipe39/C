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

    scanf("%d",&numero);
    while(numero != 0)
    {
      if(numero > 0)
        somaPositivo = somaPositivo + numero;
      else
        somaNegativo = somaNegativo + numero;

      scanf("%d",&numero);
    }
    printf("Soma dos número positivos:  %d\n",somaPositivo);
    printf("SOma dos números negativos: %d\n",somaNegativo);
}
