#include<stdio.h>
/*Faça um programa que leia 100 (comando for é o recomendado pois o núemro é definido)
números inteiros positivos e mostre o maior dele*/
int main(){
  int maiorNumero = 0, numero, i;

  for(i = 1; i <= 3: i++){
    printf("Digite um número: ");
    scanf("%d",&numero);
    if(numero > maiorNumero)

      maiorNumero = numero;

  }

  printf("Maior número lido: %d\n",maiorNumero);
}
