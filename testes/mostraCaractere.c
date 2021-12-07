#include<stdio.h>
/*
*Autor: Felipe Falcão
*Data:  07/12/2021
*
*
*Programa que lê caractere e mostra os caracteres juntos como uma
* 
***/
int main(){

  const int tamanho = 1; int posicao;
  char caractere[tamanho];

  for(posicao = 0; posicao <= tamanho; posicao++){
    printf("Digite um caractere: ");
    scanf(" %c",&caractere[posicao]);
  }
  printf("Os caracteres digitados foram: ");
  for(posicao = 0; posicao <= tamanho; posicao++)
  {
    printf("%c",caractere[posicao]);
  }
}
