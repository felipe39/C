#include<stdio.h>
/*
 *Autor: Felipe de melo falcão tavares
 *
 *Data: 05/12/2021
 *
 *Antes de mais nada, é usado o comando FOR, pois os número são determinados
 *Programa que lê uma quantidade de números inteiros e o mostra na ordem inversa*/
  int main(void){
    int numero[4], posicao;//5 posições, começando de 0 até 4, que dá 5

    /*Percorrendo o vetor e, lendo os dados do zero até o número 4
    Poderia muito bem colocar posica < 5, daria no mesmo resultado*/
    for(posicao = 0; posicao <= 4; posicao++){
        printf("Digite um número no vetor: ");
        scanf("%d",&numero[posicao]);
    }
    /*Percorrendo o vetor e, mostrando os números na ordem inversa do 4 até 0*/
    for(posicao = 4; posicao >= 0; posicao--){
        printf("%d\n",numero[posicao]);
    }
  }
