#include<stdio.h>
/*
*Autor: Felipe Falcão
*
*Data: 07/12/2021
*
*Programa que joga o conteúdo de um vetor para o outro, porém, joga apenas os
*números ímpas e pares
********/
int main(){
  const int tamanho = 2;//Constante que define um valor fixo
  int posicao, numero[tamanho], receberNumeros[tamanho];//Vetor com três posições

  /*Percorrerá o 1 vetor preenchendo cada elemento*/
  for(posicao = 0; posicao <= tamanho; posicao++)
  {
    printf("Digite um número: ");
    scanf("%d",&numero[posicao]);
    receberNumeros[posicao] = 0;// Todas as posições vão receber zero

      if(numero[posicao]%2 == 0)
        receberNumeros[posicao] = numero[posicao] + 1;
      else
        receberNumeros[posicao] = numero[posicao] - 1;

  }
      /*Percorrerá e imprimirá o conteúdo do vetor 2*/
      for(posicao = 0; posicao <= tamanho; posicao++)
      {
        printf("\nNúmero do 1 vetor %d\n",numero[posicao]);
        printf("Numero do 2 vetor %d\n",receberNumeros[posicao]);
      }

}
