#include<stdio.h>
/*
 *Autor: Felipe de melo falcão tavares
 *
 *Data: 05/12/2021
 *
 *Programa que lê uma quantidade de números inteiros e o mostra na ordem inversa*/
  int main(){
    int numero[4], posicao;//5 posições, começando de 0 até 4, que dá 5

    for(posicao = 0; posicao <= 4; posicao++){
        printf("Digite um número: ");
        scanf("%d",&numero[posicao]);
    }
    for(posicao = 4; posicao >= 0; posicao--){
        printf("%d\n",numero[posicao]);
    }
  }
